#include <iostream>
using namespace std;

int main() {

    string names[] = {
        "Hanna",
        "Peter",
        "Mary",
        "Mike",
        "James"
    };

    names[1] = "John";

    int size = sizeof names / sizeof names[0];
    for(int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }

    return 0;

}