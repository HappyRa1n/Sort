#include <iostream>
using namespace std;
void Binary_sort(int* mas, int n) {
	int l;
	int r;
	for (int i = 1; i < n; i++) {
		int c = mas[i];
		r = i;
		l = 0;
		while (l < r) {
			int m = (l + r) / 2;
			if (mas[m] <= c)
				l = m + 1;
			else
				r = m;
		}
		for (int j = i; j > l; j--) {
			mas[j] = mas[j - 1];
		}
		mas[l] = c;
	}
}
int main()
{
	int n;
	cin >> n;
	int* mas = new int[n];


	for (int i = 0; i < n; i++)
		cin >> mas[i];
	Binary_sort(mas, n);
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
}