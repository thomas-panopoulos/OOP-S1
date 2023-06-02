#include "Game.h"
#include <iostream>
using namespace std;
int main() {
    Game g;

    g.initGame(10, 10, 1000, 1000);

    g.gameLoop(20, 10);
}