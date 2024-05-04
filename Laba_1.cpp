#include<iostream>
#include <clocale>
using namespace std;
const int n = 10;
int main()
{
    int a[n];
    setlocale(LC_ALL, "Ru");
    int j;
    int k = 1;
    for (int i = 0; i < n; ++i) {
        a[i] = rand() % 100;
        cout << a[i] << ' ';
    }
    cout << endl;
    int max = a[0];
    for (int i = 1; i < n; ++i) {
        if (max < a[i]) {
            max = a[i];
            k = 1;
            j = i;
        }
        else {
            if (a[i] == max) k += 1;
        }
    }
    cout << "Максимальный элемент в массиве: " << max << endl;
    cout << "Количество максимальных элементов в массиве: " << k << endl;
    cout << "Индекс максимального элемента в массиве: " << j << endl;

}
