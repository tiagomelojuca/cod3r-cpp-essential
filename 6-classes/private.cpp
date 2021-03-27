#include <iostream>
using namespace std;

const double MIN_WAGE = 1500;

class Employee {
private:
    string name;
    double wage = MIN_WAGE;
public:
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    double getWage() {
        return wage;
    }

    void setWage(double w) {
        if(w >= MIN_WAGE) {
            wage = w;
        }
    }
};

int main() {

    Employee emp1;
    emp1.setName("Paul Smith");
    emp1.setWage(-300);

    cout << "US$" << emp1.getWage() << endl;
    
    return 0;
    
}