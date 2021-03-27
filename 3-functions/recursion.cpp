#include <iostream>
using namespace std;

// 1! = 1
// 6! = 6 * 5!
// 6! = 6 * 5 * 4!
// 6! = 6 * 5 * 4 * 3!
// 6! = 6 * 5 * 4 * 3 * 2!
// 6! = 6 * 5 * 4 * 3 * 2 * 1!
// 6! = 6 * 5 * 4 * 3 * 2 * 1

// int factorial(int n) {
//     int total = 1;
//     for(int i = 2; i <= n; i++) {
//         total *= i;
//     }
//     return total;
// }

int factorial(int n) {
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << factorial(6) << endl;
    return 0;
}