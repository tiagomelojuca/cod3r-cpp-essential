#include <iostream>
using namespace std;

// int chooseMaxNum( int n1, int n2, int n3 ) {
//     if( n1 >= n2 && n1 >= n3 ) {
//         return n1;
//     } else if ( n2 >= n3 ) {
//         return n2;
//     } else {
//         return n3;
//     }
// }

int chooseMaxNum(int n1, int n2) {
    return n1 >= n2 ? n1 : n2;
}

int main() {

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << endl;

    // cout << chooseMaxNum(a, b, c) << endl;
    cout << chooseMaxNum(a, chooseMaxNum(b, c));

    return 0;

}