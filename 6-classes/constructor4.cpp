#include <iostream>
using namespace std;

class Actor {
public:
    string name;
    string email;

    Actor(string name = "Anonymous", string email = "-")
        : name(name), email(email) {}

    string toString() {
        return name + " [" + email + "]";
    }
};

int main() {

    Actor actor1;
    Actor actor2("Steve", "carell@office.com");
    Actor actor3{"John Doe", "johndoe@gmail.com"};

    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;
    cout << actor3.toString() << endl;

    return 0;

}