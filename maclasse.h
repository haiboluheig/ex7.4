#ifndef MACLASSE_H
#define MACLASSE_H

class Robot {
public:
    //constructeur
    Robot(int positionInitiale=0);
    //modificateur
    void faireDemiTour();
    void deplacer(unsigned nbUnites=1);
    //sélecteur
    int getPosition() const;
private:
    int direction;//+1=vers la droite,-1=vers la gauche
    int position;//la position courante du robot
};

#endif /* MACLASSE_H */

