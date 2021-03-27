#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    matrix[1][2] = 16;
    cout << matrix[1][2] << " ";

    int matrix2[3][3];
    matrix2[0][0] = 1;
    matrix2[0][1] = 2;
    matrix2[0][2] = 3;
    matrix2[1][0] = 4;
    matrix2[1][1] = 5;
    matrix2[1][2] = 6;
    matrix2[2][0] = 7;
    matrix2[2][1] = 8;
    matrix2[2][2] = 9;

    cout << matrix2[1][2] << " ";

    return 0;

}