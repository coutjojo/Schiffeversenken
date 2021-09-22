#ifndef PLAYER
#define PLAYER

class Player {
private:

    int p_mapSize, p_nShips;
    Map<> map;

public:
    Player(int mapSize, int nShips = 5);

    //coords fireShot();
    //void receiveShot(coods loc);
    bool shipsAlive();
    
};


#endif