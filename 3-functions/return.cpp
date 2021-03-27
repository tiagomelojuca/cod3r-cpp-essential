#include <iostream>
using namespace std;

void log(string text) {
    if(text.empty()) return;
    if(text == "Hi") return;
    cout << "Text: " << text << endl;
}

// bool log(string text) {
//     if(text.empty()) return false;
//     if(text == "Hi") return false;
//     cout << "Text: " << text << endl;
//     return true;
// }

int main() {
    log("Hi");
    log("ok");
    return 0;
}