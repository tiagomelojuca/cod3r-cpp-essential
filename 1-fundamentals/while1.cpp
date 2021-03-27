#include <iostream>
using namespace std;

int main() {

    int number = 0;
    int total = 0;
    int qty = 0;
    double avg;

    while(number != -1) {
        cout << "Enter -1 to finish: ";
        cin >> number;
        if(number != -1) {
            total += number;
            qty++;
        };
    }

    // cast
    avg = (double) total / qty;

    // result
    cout << "Numbers: " << qty << endl;
    cout << "Sum: " << total << endl;
    cout << "Average: " << avg << endl;

    return 0;

}