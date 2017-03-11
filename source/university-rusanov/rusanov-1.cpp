#include <iostream>

using namespace std;

int recursion(int array[], int n, int i = 0, int max = 0, bool mod = false) {
    // DEBUG cтрока
    // cout << "value = " << array[n] << " n = " << n  << " i = " << i << " max = " << max << " mod = " << mod << endl;

    if (mod) {
        if ( i > max) {
            max = i;
            i = 0;
        }
    }

    if (n == 0) {
        if (!max) return i + 1;
        return max + 1;
    }else{
        if ((array[n - 1] % array[n]) == 0) {
            return recursion(array, n - 1 , i + 1, max, false);
        } else {
            return recursion(array, n - 1, i, max, true);
        }
    }
}

int main() {
    // Массив специально делаю не динамическим, чтобы не заполнять вручную, так нагляднее.

    int array[9] = {9, 10000, 1000, 100 ,10 , 7, 100, 10, 1};

    cout << "Максимальная последовательность: " << recursion(array, 8);
    return 0;
}
