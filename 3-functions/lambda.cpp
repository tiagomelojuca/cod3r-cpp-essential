#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int {
    return x + y;
};

// We can omit the return too
auto subtract = [](int x, int y) {
    return x - y;
};

int main() {

    cout << add(10, 20) << endl;
    cout << subtract(20, 26) << endl;

    return 0;

}