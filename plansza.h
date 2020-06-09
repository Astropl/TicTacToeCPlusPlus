#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>

using namespace std;

class Plansza
{
public:
    string test;
    string wyborPola;
    void init();
    void rysujPlansze();
    void ruchy();
    void pierwszyGracz();
    void drugiGracz();
    string postawZnak();

};

#endif // PLANSZA_H
