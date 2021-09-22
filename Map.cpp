#include<Map>

template <int size> class Map::bool isPosFree{
    if(field[ship.coords.x][ship.coords.y] == 0){
        return true 
    }else{
            return false;
        }
}

template <int size> class Map::void setShip(coords coords, int shipID){
        field[coords.x][coords.y] = shipID;
    }

template <int size> class Map::int prozessshot(coords coords){
    	    // 0 = platscher 1 = hit 2 = treffer versenkt 3 = feld wurde schon beschossen
        if(field[coords.x][coords.y] == 1)
        return 3; // wurde schon beschosen
        else if(field[coords.x][coords.y] == 0){
            return 0; //kein treffer
        }else if(field[coords.x][coords.y] > 1){
            int tempID = 0;
            tempID = field[coords.x][coords.y];
            field[coords.x][coords.y] = 1;
        }
}
