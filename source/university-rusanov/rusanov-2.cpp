#include <iostream>

using namespace std;


/*
 * Заполнение массива случайными числами
 *
 * Пример вызова mul_arr_rand_value(array, 2, 3)
 *
 * @param array передаваемый массив
 * @param colums кол-во колонок массива
 * @param lines кол-во строк массива
 * @return void
 */
void mul_arr_rand_value(int* array[], int columns, int lines) {
    srand(time(NULL));

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < lines; ++j) {
            array[i][j] = rand() % 2 - 0;
        }
    }
}


/*
 * Печать многомерного массива
 *
 * Пример вызова show_mul_arr(array, 2, 6, 2)
 *
 * @param array передаваемый массив
 * @param colums кол-во колонок массива
 * @param lines кол-во строк массива
 * @param mod тип печати (1,2)
 * @return void
 */
void show_mul_arr(int* array[], int columns, int lines, int mod) {
    if (mod == 1) {
        cout << "Индекс\t\t" << "Значение" << endl;

        for (int i = 0; i < columns; i++) {
            for (int j = 0; j < lines; ++j) {
                cout << "[" << i << "]" << "[" << j << "]" << "      " << array[i][j] << endl;
            }
        }
    }
    else if(mod == 2) {
        for (int i = 0; i < lines; i++) {
            for (int j = 0; j < columns; ++j) {
                cout << "[" << i << "]" << "[" << j << "]" << " = " << array[j][i];
            }
            cout << endl;
        }
    }
}

int s_m (int *array[], int columns, int lines, int matr_size) {
    int m = 0;

    for (int i = 0; i < lines; ++i) {

        bool no = false;

        for (int j = 0; j < columns; ++j) {
            if(j + matr_size - 1 < columns and i + matr_size - 1 < lines) {
                for (int k = 0; k < matr_size; ++k) {
                    if(!no) {
                        for (int l = 0; l < matr_size; ++l) {
                            if (!no) {
                                if (!array[j + k][i + l]) {
                                    no = true;
                                }
                            }
                        }
                    }
                }
                if(!no) {
                    m++;
                }
                no = false;
            }
        }
    }
    if(m) {
        cout << "Нашел " << m << endl;
        return 1;
    }else{
        return 0;
    }
}

void mul_arr_rand_value(int* array[], int columns, int lines);

void show_mul_arr(int* array[], int columns, int lines, int mod);

int main() {

    cout << "Задание 1" << endl;

    cout << "Количество столбцов: ";
    int mul_array_columns;
    cin >> mul_array_columns;
    cout << "Количество строк: ";
    int mul_array_lines;
    cin >> mul_array_lines;
    cout << "Размер искомой матрицы: ";
    int matr_size;
    cin >> matr_size;

    cout << "Выделение памяти под массив..." << endl;
    int* *mul_arr;
    mul_arr = (int **)calloc(mul_array_columns, sizeof(*mul_arr));
    for (int l = 0; l < mul_array_columns; ++l)
        mul_arr[l] = (int*)calloc(mul_array_lines, sizeof(*mul_arr[l]));

    cout << "Заполняем массив случайными числами..." << endl;
    mul_arr_rand_value(mul_arr, mul_array_columns, mul_array_lines);

    show_mul_arr(mul_arr, mul_array_columns, mul_array_lines, 2);

    s_m(mul_arr, mul_array_columns, mul_array_lines, matr_size);

    return 0;
}
