#include <iostream>
#include "clsTime.h"

using namespace std;

int main()
{
    clsTIME t1("13:19:43"), t2(14,02,20), t3;
    cout<<"T1: "<<t1<<endl;
    cout<<"T2: "<<t2<<endl;
    cout<<"T3: "<<t3<<endl;
    //cin>>t3;
    //cout<<"T3: "<<t3<<endl;

    t2+49;
    cout<<t2;

    cout<<"Diferenta T2-T1 este: "<<t2-t1<<" secunde. "<<endl;
    t1==t2 ? cout<<"t1 si t2 au timpi egali"<<endl : cout<<"T1 si T2 nu au timpi egali"<<endl;
    cout<<t2(15, "minutes")<<endl;
    cout<<t1("hours")<<endl;
    return 0;
}
