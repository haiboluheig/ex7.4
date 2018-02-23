
/* 
 * File:   main.cpp
 * Author: luhaibo_
 *
 * Created on February 21, 2018, 3:14 PM
 */

#include <cstdlib>
#include<iostream>

#include "maclasse.h"
using namespace std;

int main() {
    //exe 7.4
    Robot r1, r2(10);
    cout << "Position courante de r2: " << r2.getPosition() << endl;
    r1.deplacer();
    cout << "Position courante de r1: " << r1.getPosition() << endl;
    r1.deplacer(2);
    cout << "Position courante de r1: " << r1.getPosition() << endl;
    r1.faireDemiTour();
    r1.deplacer(4);
    cout << "Position courante de r1: " << r1.getPosition() << endl;
    r1.deplacer();
    cout << "Position courante de r1: " << r1.getPosition() << endl;
    return EXIT_SUCCESS;
}