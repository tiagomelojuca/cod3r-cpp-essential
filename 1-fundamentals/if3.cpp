#include <iostream>
using namespace std;

int main() {

    // double num1, num2, num3, choosenNum;

    // cout << "Enter number 1: ";
    // cin >> num1;

    // cout << "Enter number 2: ";
    // cin >> num2;

    // cout << "Enter number 3: ";
    // cin >> num3;

    // if( num1 >= num2 ) {
    //     choosenNum = num1;
    // }

    // if( num1 < num2 ) {
    //     choosenNum = num2;
    // }

    // if( num3 >= choosenNum ) {
    //     choosenNum = num3;
    // }

    // cout << "The higher number is: " << choosenNum << endl;

    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if( n1 >= n2 && n1 >= n3 ) {
        cout << n1 << endl;
    }

    if( n2 >= n1 && n2 >= n3 ) {
        cout << n2 << endl;
    }

    if( n3 >= n1 && n3 >= n2 ) {
        cout << n3 << endl;
    }

    return 0;

}