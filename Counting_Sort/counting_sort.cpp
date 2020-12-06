#include <iostream>
using namespace std;
void Sort(int* mas, int k, int n) {
	int* c = new int[k + 1];
	for (int i = 0; i < k + 1; i++)
		c[i] = 0;
	for (int i = 0; i < n; i++)
		c[mas[i]]++;
	int tmp = 0;
	for (int i = 0; i < k + 1; i++) {
		while (c[i] > 0) {
			mas[tmp++] = i;
			c[i]--;
		}
	}
	delete[] c;
}
int main()
{
	int n;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
		cin >> mas[i];
	int k;//max number;
	cin >> k;
	Sort(mas, k, n);
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";

}