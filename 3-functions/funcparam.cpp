#include <iostream>
using namespace std;

using binaryop = int (*)(int, int);

int exec(binaryop func, int a, int b) {
    return (*func)(a, b);
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {

    cout << exec(add, 33, 44) << endl;
    cout << exec(subtract, 7, 2) << endl;
    cout << exec(min, 7, 2) << endl;

    return 0;

}