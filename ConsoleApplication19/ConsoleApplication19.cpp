#include <iostream>

using namespace std;


//1 

/*
const int MAX_ROWS = 100;
const int MAX_COLS = 100;
typedef int Matrix[MAX_ROWS][MAX_COLS];


void addColumn(Matrix& matrix, int rows, int cols, int columnIndex, const int columnValues[]) {
    if (columnIndex < 0 || columnIndex > cols) {
        cout << "incorect index" << endl;
        return;
    }

    for (int i = 0; i < rows; ++i) {
        if (columnValues[i] == '\0') {
            cout << "error" << endl;
            return;
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = cols; j > columnIndex; --j) {
            matrix[i][j] = matrix[i][j - 1];
        }
        matrix[i][columnIndex] = columnValues[i];
    }
}

void printMatrix(const Matrix& matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Matrix myMatrix = { {1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9} };
    int newColumn[] = { 10, 11, 12 };

    int rows = 3;
    int cols = 3;

    cout << "arr: " << endl;
    printMatrix(myMatrix, rows, cols);

    int columnIndex = 1;

    addColumn(myMatrix, rows, cols, columnIndex, newColumn);

    cout << "\anadvanced array: " << endl;
    printMatrix(myMatrix, rows, cols + 1);

    return 0;
}
*/


//2

/*
const int MAX_ROWS = 100;
const int MAX_COLS = 100;
typedef int Matrix[MAX_ROWS][MAX_COLS];

void removeColumn(Matrix& matrix, int rows, int& cols, int columnIndex) {
    if (columnIndex < 0 || columnIndex >= cols) {
        cout << "inccorect index" << endl;
        return;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = columnIndex; j < cols - 1; ++j) {
            matrix[i][j] = matrix[i][j + 1];
        }
    }

    cols--;
}

void printMatrix(const Matrix& matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Matrix myMatrix = { {1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9} };

    int rows = 3;
    int cols = 3;

    cout << "arr:" << endl;
    printMatrix(myMatrix, rows, cols);

    int columnIndex = 1;

    removeColumn(myMatrix, rows, cols, columnIndex);

    cout << "\nanadvanced array:" << endl;
    printMatrix(myMatrix, rows, cols);

    return 0;
}
*/

