#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b + 10;
}

namespace calc {
    int add(int a, int b) {
        return a + b + 20;
    }
}

int main() {
    cout << add(10, 20) << endl;
    cout << calc::add(10, 20) << endl;
    return 0;
}