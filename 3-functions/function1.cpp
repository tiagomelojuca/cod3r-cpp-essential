#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello!\n";
}

void sayHelloTo(string name) {
    cout << "Hello " << name << "!" << endl;
}

string returnHi() {
    return "Hi!";
}

string returnHiTo(string name) {
    return "Hi " + name + "!";
}

int main() {

    sayHello();

    sayHelloTo("Peter");
    sayHelloTo("Hanna");

    string result = returnHi();
    result.append("!!!");
    cout << result << endl;

    cout << returnHi() << endl;

    cout << returnHiTo("Mike") << endl;
    cout << returnHiTo("Mary") << endl;

    return 0;

}