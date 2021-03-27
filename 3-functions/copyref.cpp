#include <iostream>
using namespace std;

void incCopy(int value) {
    value++;
    value++;
    value++;
}

void incRef(int& value) {
    value++;
    value++;
    value++;
}

// void incRefPointer(int* adress) {
//     (*adress)++;
//     (*adress)++;
//     (*adress)++;
// }

int main() {

    int x = 1;

    incCopy(x);
    cout << x << endl;

    incRef(x);
    cout << x << endl;

    // incRefPointer(&x);
    // cout << x << endl;

    return 0;
    
}