#include <iostream>
#include <clocale>

const int n = 10;
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	int a[n] = { 20, 12, 1, 2, 6, 8, 22, 96, 10, 4 };
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		int r = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > r)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = r;
	}
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	return 0;
}