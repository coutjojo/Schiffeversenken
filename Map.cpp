#include"Map.h"

Map::Map(int size){
    this->mapSize = size;
    for(int i = 0; i<size;i++){
        std::vector<int> temp;
        for(int j = 0; j<size;j++){
            temp.push_back(0);
        }
       field.push_back(temp);
    }
    std::cout<<"works";
}
/*Map::Map(){
    std::cout<<"Standardkonstruktor wurde aufgerufen"<<std::endl;
 this->mapSize = 10;
    for(int i =0; i<10;i++){
        for(int j = 0; j<10;j++){
            field[i][j]=0;
        }
    }

}*/

bool Map::isPosFree(coords coords){
    if(field[coords.x][coords.y] == 0){
        return true ;
    }else{
            return false;
        }
}

 bool Map::isAlive(int shipID){
    for(int i = 0;i<mapSize;i++){
        for(int j = 0;j<mapSize;j++){
            if(field[i][j]= shipID){return true;}//schiff lebt noch
        }
    }
    return false; // schiff lebt nicht mehr
}


void Map::setShip(coords coords, int shipID){
        field[coords.x][coords.y] = shipID;
    }

int Map::processShot(coords coords,int shipID){ // 0 = platscher 1 = hit 2 = treffer versenkt 3 = feld wurde schon beschossen
        if(field[coords.x][coords.y] == 1)
        return 3; // wurde schon beschosen
        else if(field[coords.x][coords.y] == 0){
            return 0; //kein treffer
        }else if(field[coords.x][coords.y] > 1){
            int tempID = 0;
            tempID = field[coords.x][coords.y];
            field[coords.x][coords.y] = 1;
            if(isAlive(shipID)){
                return 2; // hit
            }else{
                return 3; // treffer versenkt;
            }
        }
        return 666;
}