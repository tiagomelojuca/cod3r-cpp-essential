#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int health;
    Player(string n, int h = 100) : name(n), health(h) {}
    Player(const Player& p) : name(p.name), health(p.health) {
        cout << "copy..." << endl;
    }
    ~Player() { cout << "Destructor" << endl; }
};

void printPlayer(Player p) {
    cout << p.name << " [" << p.health << "%]" << endl;
}

int main() {
    Player p {"Monster"};
    printPlayer(p);
    return 0;
}