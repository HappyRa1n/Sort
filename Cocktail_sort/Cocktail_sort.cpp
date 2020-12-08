#include <iostream>
using namespace std;
void sort_sheiker(int mas[], int n) {
	int left = 0;
	int right = n - 1;
	int b = true;
	while (b&& left < right) {
		b = false;
		for (int i = left; i < right; i++)
		{
			if (mas[i] > mas[i + 1])
			{
				swap(mas[i], mas[i + 1]);
				b = true;
			}
		}
		right--;
		for (int j = right; j > left; j--) {
			if (mas[j] < mas[j - 1])
			{
				swap(mas[j], mas[j - 1]);
				b = true;
			}
		}
		left++;
	}
}
int main()
{
	int n;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
		cin >> mas[i];
	sort_sheiker(mas, n);
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}
}
