#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(0, "");
    size_t size;
    cin >> size;
    double* A = new double[size];
    double sum = 0;
    for (size_t i = 0; i < size; i++) {
        A[i] = rand() % 99;
        cout << A[i] << " ";

    }
    cout << endl;
    for (size_t i = 0; i < size; i++) {
        sum = sum + A[i];
    }
    sum = sum / size;
    cout << sum << endl;
    delete[] A;
    return 0;
}