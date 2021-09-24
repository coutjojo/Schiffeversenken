#ifndef MAP 
#define MAP

#include<vector>
#include<iostream>

enum direction {horizontal,vertikal};//beginn obere linke ecke
struct coords{ 
int x,y;
};


class Map{

private:
 std::vector<std::vector<int>> field;
 int mapSize;
  
public:
    Map(int size);
    Map(){};
    
   bool isPosFree(coords coords);

   void setShip(coords coords, int shipID);
    
    bool isAlive(int shipID);
         
    int processShot(coords coords,int shipID);
};
#endif