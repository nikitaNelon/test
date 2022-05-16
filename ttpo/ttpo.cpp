#include<iostream>
#include<ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    int n = 0, sum = 0, num = 0;

    cout << "Введите размерность массива: "; cin >> n; cout << '\n';

    int** mas = new int* [n];

    for (int i = 0; i < n; i++) {

        mas[i] = new   int[n];
        srand(time(NULL));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            num = rand() % 11;
            mas[i][j] = num;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            cout << mas[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            if (i == j) sum += mas[i][j];
        }
    }

    cout << "\nСумма чисел на главной диагонали = " << sum << '\n';

    for (int i = 0; i < n; i++)
        delete  mas[i];

    delete[] mas;

    return 0;
}
