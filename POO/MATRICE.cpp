#include <iostream>
#include "MATRICE.h"

MATRICE::MATRICE(int l, int c, int valInit) {
    N=l;
    M=c;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++){
            mat[i][j] = valInit;
        }
    }
}

MATRICE::~MATRICE() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++){
            mat[i][j] = 0;
        }
    }
    N=0;
    M=0;
}

MATRICE::MATRICE( MATRICE& b) {
    N = b.N;
    M = b.M;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++){
            mat[i][j] = b.mat[i][j];
        }
    }
}

MATRICE& MATRICE::operator=(MATRICE& b){

}

int MATRICE::getElement(int l2, int c2) {
    return mat[l2][c2];
}

void MATRICE::setMatrix() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++){
            mat[i][j] = i*5+j;
        }
    }
}

void MATRICE::printMatrix() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void MATRICE::multiplyMatrixWithConstant(int c) {
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++){
            mat[i][j] = mat[i][j] * c;
        }
    }
}
