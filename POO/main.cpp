#include "stiva.h"

using namespace std;

int main()
{
    myStack s;

    s + 1;
    s + 8;
    s + 5 + 19 + 32;

    cout << "Stiva contine: " << s << endl; // imprimarea intregii stive

    cout << "Ultima valoare din stiva este: " << !s << endl;

    --s;
    --s;

    cout << "Ultima valoare din stiva este: " << !s << endl;

    // ... si alte apeluri introduse de STUDENT

    //s.~myStack();

    cout << "Dimensiunea stivei este: " << int(s) << endl;

    return 0;
}
