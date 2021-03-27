#include <iostream>
using namespace std;

const double PI = 3.141592;
int g = 1;

void func3() {
    g += 100;
    int g = 0;
    g += 100;
}

void func2() {
    g += 10;
    func3();

    {
        int a = 3;
        cout << a << endl;
    }
    
    // cout << a << endl; -> don't work
}

void func1() {
    g += 1;
    func2();
}

int main() {
    func1();
    cout << g << endl;
    return 0;
}