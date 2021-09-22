#include<Map>


template <int size> bool Map<size>::isPosFree(coords coords){
    if(field[ship.coords.x][ship.coords.y] == 0){
        return true 
    }else{
            return false;
        }
}

template <int size> bool Map<size>::isAlive(int shipID){
    for(int i = 0; i++;i<size){
        for(int j = 0;j<size;j++){
            if(field[i][j]= shipID){return true;}//schiff lebt noch
        }
    }
    return false; // schiff lebt nicht mehr
}


template <int size> void Map<size>::setShip(coords coords, int shipID){
        field[coords.x][coords.y] = shipID;
    }

template <int size> int Map<size>::processShot(coords coords){ // 0 = platscher 1 = hit 2 = treffer versenkt 3 = feld wurde schon beschossen
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
}
