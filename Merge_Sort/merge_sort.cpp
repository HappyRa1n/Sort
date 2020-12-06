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