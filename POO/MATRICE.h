#ifndef MATRICE_H
#define MATRICE_H

#include <iostream>

using namespace std;
class MATRICE
{
    int mat[100][100]; // pointerul va contine un sir de N pointeri de intregi.
    int N, M; // dimensiunile matricii
public:
    MATRICE( int n = 3, int m = 3, int val = 0 ); // val – valoare de initialize.


    MATRICE( MATRICE& b); //constructorul de copiere


    ~MATRICE();


    MATRICE& operator=( MATRICE& b ); //operatorul de atribuire
    void setMatrix();

    int& operator()( int i=0, int j=0 ); //operat. apel fct. -ret. un element
    int getElement(int l, int c);

    MATRICE& operator*( const int &b ); //inmultirea unei matrici cu o constanta
    void multiplyMatrixWithConstant(int c);

    MATRICE& operator+( MATRICE &b ); //adunarea a doua matrici

    friend ostream& operator <<( ostream &c, MATRICE &b );
    void printMatrix();
};
#endif // MATRICE_H
