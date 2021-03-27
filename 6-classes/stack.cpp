#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string name) : name(name) {
        std::cout << "Hello! My name is " << name << endl;
    }
    ~Person() {
        std::cout << name << " is saying goodbye!" << endl;
    }
};

Person* createPerson() {
    Person p("Hanna");
    return &p;
}

int main() {

    Person* pp1;

    {
        Person p1("Peter");
        pp1 = &p1;
    }

    std::cout << pp1->name << endl;

    Person* pp2 = createPerson();
    std::cout << pp2->name << endl;

    std::cout << "End of code" << endl;
    return 0;

}