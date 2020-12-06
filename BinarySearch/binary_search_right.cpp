#include <iostream>
using namespace std;
int Binary_Search(int mas[], int L, int R, int a) {
	int m;
	R++;
	while (L < R) {
		m = (L + R) / 2;
		if (mas[m] <= a) {
			L = m + 1;
		}
		else {
			R = m;
		}
	}
	if (mas[L - 1] == a)
		return L - 1;
	else
		return -1;
}
int main()
{
	int n;
	cin >> n;
	int a;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
		cin >> mas[i];
	cin >> a;
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
	int k = Binary_Search(mas, 0, n - 1, a);
	cout << k << " " << mas[k];
}