#include "stiva.h"

using namespace std;

int main(void)
{
    myStack s;

    s + 1;
    s + 8;
    s + 5 + 19 + 32;

    cout << s << endl; // imprimarea intregii stive

    cout << "Val: " << !s << endl;

    --s;
    cout << "Val: " << !s << endl;

    // ... si alte apeluri introduse de STUDENT

    //s.~myStack();

    cout << "DIM: " << int(s) << endl;

    return 0;
}
