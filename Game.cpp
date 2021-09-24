#include <iostream>
#include "Player.h"
#include "Game.h"

Game::Game(int pMapSize){
    mapSize = pMapSize;
    this->playerOne = {mapSize,0};
    this->playerTwo = {mapSize,0};
}

int main(){

    int mapSize;
    std::cout   <<"Wilkommen beim Schiffe versenken Spiel von Carlo und Johannes\n"
                <<"im ersten schritt werden beide spieler ihre schiffe setzten\n"
                <<"und dann versuchen diese gegenseitig abzuschießen.\n"
                <<"Passt auf das euer gegenspieler beim setzten nicht sieht wo ihr eure Schiffe platziert.\n"
                <<"Viel Spaß!!"<<std::endl;

        
        std::cout<<"\n\nAls erstes geben sie bitte ein wie gro? ihr spielfeld werden soll"<<std::endl;
        std::cin>>mapSize;
        Game game = Game(mapSize);

    return 0;
}