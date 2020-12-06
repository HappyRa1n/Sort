﻿// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void Merge(int* A, int p,int q, int r) {
	int i1 = p;
	int i2 = q + 1;
	int* mas = new int[r - p + 1];
	int MasIndex = 0;
	while (i1 <= q && i2 <= r) {
		if (A[i1] < A[i2]) {
			mas[MasIndex++] = A[i1++];
		}
		else {
			mas[MasIndex++] = A[i2++];
		}
	}
	while(i1<=q)
		mas[MasIndex++] = A[i1++];
	while (i2 <= r)
		mas[MasIndex++] = A[i2++];
	for (int i = 0; i < MasIndex; i++) {
		A[i + p] = mas[i];
	}
	delete[] mas;
}
void Sort(int* A, int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		Sort(A, p, q);
		Sort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}
int main()
{
	int* mas = new int[6]{6,5,4,3,2,1 };
	for (int i = 0; i < 6; i++)
		cout << mas[i] << " ";
	cout << endl;
	Sort(mas, 0, 5);
	for (int i = 0; i < 6; i++)
		cout << mas[i] << " ";
	cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.