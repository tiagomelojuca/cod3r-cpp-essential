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

    for(int i = 0; i < 5; i++) {
        cout << names[i] << " ";
    }

    cout << "\nForeach #01...\n";
    for(string s: names) {
        s.append("!!!!");
        cout << s << " ";
    }
    cout << names[0] << endl;

    cout << "\nForeach #02...\n";
    for(string &s: names) {
        s.append("!!!!");
        cout << s << " ";
    }
    cout << names[0] << endl;

    cout << "\nForeach #03 (Ref CONST)...\n";
    for(const string &s: names) {
        // s.append("!!!!");
        cout << s << " ";
    }
    cout << names[0] << endl;

    return 0;

}