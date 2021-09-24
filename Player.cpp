#include "Player.h"

Player::Player(int mapSize, int nShips) {
    p_mapSize = mapSize;
    p_nShips = 5;
    this->map = {mapSize};
}

Player::playerInit(){
    std::cout<<"Okay Spieler 1 bitte setzen sie jetzt ihre Schiffe\n"
             <<"Die Syntax läuft so das sie im ersten schritt die X und Y Koordinate eingeben\n"
             <<"und im zwitenschrittt die Ausrichtung H für Horizontal V für Vertikal\n";
    for(int i = 0 ; i<nShips)
}

coords Player::fireShot() {
    return coords{0,0};
}

void Player::receiveShot(coords loc) {

}

bool Player::shipsAlive() {
    
    
    return 0;
}