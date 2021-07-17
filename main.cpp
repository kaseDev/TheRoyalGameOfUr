// #define PY_SSIZE_T_CLEAN
// #include <Python.h>

#include <string>
#include <iostream>

class Player {
private:
    std::string name;
    int pieces[7];

public:
    Player(std::string name) {
        this->name = name;
        for (int i = 0; i < 7; i++) {
            pieces[i] = 0;
        }
    }

    std::string getName() {
        return name;
    }

    bool advance(int piece, int amount) {
        if (piece < 0 || piece >= 7 || amount < 0 || amount >= 3)
            return false;
        if (pieces[piece] + amount >= 16)
            return false;
        pieces[piece] += amount;
        return true;
    }
};

class Game {
    
};

int main() {
    Player p1("John");
    Player p2("Jane");
    std::cout << p1.getName();
    return 0;
}