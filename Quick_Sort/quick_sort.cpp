#include <iostream>
using namespace std;
int n;
void Quick_sort(int mas[], int l, int r) {
	int i = l;
	int j = r;
	int el = mas[(l + r) / 2];
	do {
		while (mas[i] < el)i++;
		while (mas[j] > el)j--;
		if (i <= j) {
			if (i < j)
				swap(mas[i], mas[j]);
			i++;
			j--;
		}
	} while (i <= j);
	if (l < j) {
		Quick_sort(mas, l, j);
	}
	if (r > i) {
		Quick_sort(mas, i, r);
	}
}
int main()
{
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
		cin >> mas[i];
	cout << endl;
	Quick_sort(mas, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
}