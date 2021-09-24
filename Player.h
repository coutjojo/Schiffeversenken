#ifndef PLAYER
#define PLAYER
#include"Map.h"

class Player {
private:

    int mapSize, nShips;
    Map map;
    void playerInit();
public:
    Player(int mapSize, int nShips);
    Player(){};
    coords fireShot();
    void receiveShot(coords loc);
    bool shipsAlive();
    
};


#endif