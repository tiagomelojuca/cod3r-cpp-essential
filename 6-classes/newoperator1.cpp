#include <iostream>
using namespace std;

int main() {

    int x = 5;

    // new => malloc() + constructor
    int* y = new int(10);
    cout << x * *y << endl;
    delete y; // delete => free() + destructor

    int* w = new int[100]; // 4bytes * 100
    w[49] = 123;
    cout << w[49] << endl;
    delete[] w;

    return 0;

}