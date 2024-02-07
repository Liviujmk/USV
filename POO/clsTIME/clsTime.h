#ifndef CLSTIME_H_INCLUDED
#define CLSTIME_H_INCLUDED

#include<iostream>

using namespace std;

class clsTIME {
    int _ore, _minute, _secunde;
public:
    clsTIME(int h, int m, int s);
    clsTIME(const char time[9]="12:00:00");
    friend ostream& operator<<(ostream &c, clsTIME &d); //afisare
    friend istream& operator>>(istream &c, clsTIME &d); //citire
    clsTIME& operator+(int nrSec); // adaugare nrSecunde
    int operator-(clsTIME &d); // differenta in secunde
    int operator==(clsTIME &d); // compara doi timpi
    clsTIME& operator()(int nr, char *element="seconds");
    int operator()(char *element="seconds");
};

#endif // CLSTIME_H_INCLUDED
