
#include <cstdlib>
#include"maclasse.h"
using namespace std;

Robot::Robot(int positionInitiale):direction(1),position(positionInitiale){}

void Robot::faireDemiTour(){
direction*=-1;
}

void Robot::deplacer(unsigned nbUnites){
    position+= direction* nbUnites;
}
int Robot::getPosition() const{
    return position;
}