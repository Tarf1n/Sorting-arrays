#include <iostream>
#include <clocale>

using namespace std;

const int n = 10;

int main() {
    setlocale(LC_ALL, "Ru");
    int a[n] = { 20, 12, 1, 2, 6, 8, 22, 96, 10, 4 };

    cout << "Исходный массив: " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        int min = i; 
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;  
            }
        }
        if (min != i) {
            int r = a[i];  
            a[i] = a[min];
            a[min] = r;
        }
    }

    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}