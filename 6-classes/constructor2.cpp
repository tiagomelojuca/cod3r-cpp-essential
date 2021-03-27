#include <iostream>
using namespace std;

class User {
public:
    string name;
    string email;

    User() {}
    User(string _name, string _email) {
        name = _name;
        email = _email;
    }

    string toString() {
        return name + " [" + email + "]";
    }
};

int main() {

    User user1;
    // or
    // User user1 = User();
    user1.name = "John Dee";
    user1.email = "johndee@gmail.com";

    User user2("Mary M.", "marym@gmail.com");
    // or
    // User user2 = User("Mary M.", "marym@gmail.com");

    cout << user1.toString() << endl;
    cout << user2.toString() << endl;

    return 0;

}