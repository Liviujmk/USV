#ifndef STIVA_H_INCLUDED
#define STIVA_H_INCLUDED

#include <iostream> // Include this line to resolve the 'ostream' error

class myStack
{
    int *stackArray; // vectorul alocat DINAMIC
    int sp;      // indicatorul de stiva
    int dim;     // dimensiunea stivei

public:
    myStack(int _dim = 10);
    ~myStack();

    myStack &operator+(int c); // adauga un nod
    myStack &operator--(void); // decrementeaza stiva
    myStack &operator--(int);
    int operator!(void);       // intoarce valoarea din virf
    operator int();            // intoarce dimensiunea stivei (dim)

    friend std::ostream &operator<<(std::ostream &c, myStack &s); // afiseaza stiva

    int isEmpty(void); // verifica daca stiva este goala
    int isFull(void);  // verifica daca stiva este plina
};

#endif // STIVA_H_INCLUDED
