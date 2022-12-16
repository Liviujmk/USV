#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int factorial(int n)
{
    int p=1;
    for(int i=1; i<=n; i++)
    {
        p*=i;
    }
    return p;
}

int nthFib(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0, i;
    if(n == 0 || n == 1)
        printf("%d", n);
    else
        nextTerm = t1 + t2;
    for (i = 3; i <= n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return t2;
}

int putereNr(int n, int exp){
    int p=1;
    if(exp==0)
        return 1;
    else{
        for(int i=1;i<=exp;i++){
            p*=n;
        }
        return p;
    }
}

int prim(int n){
    int ok=0,d;
    for(d=2;d<=sqrt(n);d++){
        if(n%d==0){
            ok=1;
            break;
        }
    }
    if(ok) return 0;
    return 1;
}

int cmmdc(int a, int b){
    while(a!=b)
        if(a > b)
            a-=b;
        else
            b-=a;
    return a;
}

void citire(int v[], int n){
    printf("cititi vectorul v: \n");
    for(int i=0;i<n;i++)
        scanf("%d", &v[i]);
    printf("\n");
}

void afisare(int v[], int n){
    printf("afisati vectorul v: \n");
    for(int i=0;i<n;i++)
        printf("%d ", v[i]);
    printf("\n");
}

int sum(int v[], int n){
    int s=0;
    for(int i=0;i<n;i++)
        s+=v[i];
    return s;

}

float mediaEl(int v[], int n){
    int s=0;
    float ma=0;
    for(int i=0;i<n;i++)
        s+=v[i];
    ma=s/n;
    return ma;
}

int main()
{
    //probleme functii
    //1 - meniu cu prelucrarea numerelor

    /*int c;
    int fact, exp;
    do
    {
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            printf("introdu nr pentru factorial: ");
            scanf("%d", &fact);
            printf("Factorialul lui %d este: %d \n", fact, factorial(fact));
            break;
        case 2:
            printf("introdu nr pentru fibonacci: ");
            scanf("%d", &fact);
            printf("Al %d termen din sirul Fibonacci este: %d \n", fact, nthFib(fact));
            break;
        case 3:
            printf("Dati un nr si o putere: ");
            scanf("%d%d", &fact, &exp);
            printf("%d ^ %d este: %d \n", fact, exp, putereNr(fact, exp));
            break;
        case 4:
            printf("introdu nr pt prim: ");
            scanf("%d", &fact);
            if(prim(fact))
                printf("Nr %d este prim \n", fact);
            else
                printf("Nr %d nu e prim \n", fact);
            break;
        case 5:
            printf("introdu nr pt cmmdc: ");
            scanf("%d%d", &fact, &exp);
            printf("cmmdc dintre %d si %d este: %d \n", fact, exp, cmmdc(fact, exp));
            break;
        default:
            printf("default\n\n");
        }
    }
    while(c<=5);*/

    //2 meniu pentru vectori

    int c;
    int v[100], n=5;
    do
    {
        scanf("%d", &c);
        switch(c)
        {
        case 1:
            citire(v, n);
            break;
        case 2:
            afisare(v,n);
            break;
        case 3:
            printf("suma este %d \n", sum(v,n));
            break;
        case 4:
            printf("media el este %.2f", mediaEl(v,n));
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            printf("default\n\n");
        }
    }
    while(c<=7);
    return 0;
}
