#include <iostream>
using namespace std;

int main() {

    int value = 98765;
    int& ref = value;
    int* pointer = &value;

    cout << value << "\t" << ref << "\t" << *pointer << endl;

    return 0;

}