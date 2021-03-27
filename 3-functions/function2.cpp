#include <iostream>
using namespace std;

// Function prototype
void log(int number = 0, bool newLine = true);

int main() {

    log(3);
    log(4);
    log(5);

    log(3, false);
    log(4, false);
    log(5, false);

    cout << endl;
    log();
    log();
    log();

    return 0;

}

void log(int number, bool newLine) {
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}