#include <iostream>
using namespace std;

int main() {

    // string& badRef;
    // string& badRef = NULL;

    string greeting = "Hi!";
    string& ref = greeting;

    cout << greeting << "\t" << ref << endl;
    
    string name = "Peter";
    ref = name;

    cout << name << "\t" << ref << "\t" << greeting;

    ref.append("!!!");
    cout << endl << greeting;

    return 0;

}