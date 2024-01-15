#include <iostream>
#include "MATRICE.h"
using namespace std;
int main()
{
    MATRICE m1( 4, 5, 1 );
    m1.setMatrix();
    /*for( int i = 0; i < 4; i++)
        for( int j = 0; j < 5; j++ )
            m1( i, j ) = i * 5 + j;*/

    cout << "m1(2,3)=" << m1.getElement( 2, 3) << endl <<endl;
    //cout << "m1(2,3)=" << m1( 2, 3) << endl;

    m1.printMatrix();
    //cout << m1;

    MATRICE m2( m1 );

    m2.multiplyMatrixWithConstant(3);
    //m2 * 3;

    m2.printMatrix();
    //cout << "\n\n" << m2;

    MATRICE m3( 4, 5 );


    //m3 = m1 + m2;

    m3.printMatrix();
    //cout << "\n\n" << m3;*/
    return 0;
}
