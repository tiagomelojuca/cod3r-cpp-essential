#include <iostream>
using namespace std;

int main() {

    int values[] = {31, 44, 58, 91, 25};
    cout << values[0] << endl;
    cout << values[4] << endl;

    cout << endl;
    cout << sizeof values[0] << endl;
    cout << sizeof values << endl;
    cout << sizeof values / sizeof values[0] << endl;

    return 0;

}