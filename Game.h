#include"Player.h"

class Game{

private:
    int mapSize;
    Player playerOne;
    Player playerTwo;

public:
    Game(){};
    Game(int pMapSize);
    bool startGame();//False player one gewinnt true Player two gewinnt

};