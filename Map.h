enum direction {horizontal,vertikal};//beginn obere linke ecke
struct coords{ 
int x,y;
};

template <int size> class Map{

private:
    int field[size][size];

    
public:
    Map(int length, pos pos);
    
    bool isPosFree(coords coords,int shipID);

    void setShip(coords coords, int shipID){
    
    bool isAlive(int shipID)
         
    int prozessshot(coords coords);
};