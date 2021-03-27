#include <iostream>
using namespace std;

int main() {

    // for(int i = 0; i < 10; i++) {
    //     if(i == 5) {
    //         continue;
    //         // break;
    //     }
    //     cout << i << endl;
    // }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(j == 2) {
                break;
            }
            cout << i << " " << j << endl;
        }
    }

    cout << "end" << endl;

    return 0;

}