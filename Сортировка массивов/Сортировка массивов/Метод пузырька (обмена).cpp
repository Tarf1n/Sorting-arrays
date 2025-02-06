#include <iostream>
#include <clocale>

using namespace std;

const int n = 10;

int main() {
    setlocale(LC_ALL, "Ru");
    int a[n] = { 20, 12, 1, 2, 6, 8, 22, 96, 10, 4 };

    cout << "Исходный массив" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int r = a[j];
                a[j] = a[j + 1];
                a[j + 1] = r;
            }
        }
    }
    cout << "Отсортированный массив" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}