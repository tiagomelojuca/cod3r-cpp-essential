#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    cout << argc << endl;
    cout << argv[0] << endl;

    if(argc >= 2) {
        cout << argv[1] << endl;
    }

    return 0;
}