#include <iostream>
using namespace std;

int main() {

    int x = 7;
    int &xRef = x;

    cout << x << "\t" << &x << endl;
    cout << xRef << "\t" << &xRef << endl;
    
    x++;
    cout << xRef << "\t" << &xRef << endl;

    xRef--;
    cout << x << "\t" << &x << endl;

    return 0;

}