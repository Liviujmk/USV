#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    /*int n, sum=0,i;
    scanf("%d", &n);
    i=1;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    printf("Suma este %d", sum);*/

    //2
    /*int n, sum=0;
    while(n){
        scanf("%d", &n);
        sum+=n;
    }
    printf("Suma este %d", sum);*/

    //3
    /*int n, sum=0,p=1;
    scanf("%d", &n);
    while(n){
        if(n%2==0)
            sum+=n;
        else p*=n;
        scanf("%d", &n);
    }
    printf("Suma este %d\nProdusul este %d", sum,p);
    */

    //4
    /*int n, sum=0,p=1;
    scanf("%d", &n);
    while(n){
        if(n%2==1) {
            scanf("%d", &n);
            continue;
        }
        printf("%d ",n);
        scanf("%d", &n);
    }*/

    //5

    /*int poz=0,n,neg=0;
    scanf("%d", &n);
    while(n){
        if(n>=0) poz++;
        else neg++;
        scanf("%d", &n);
    }
    printf("%d numere pozitive si %d numere negative", poz, neg);*/

    //6
    /*int n, sum=0;
    scanf("%d", &n);
    int i=1;
    do {
        sum+=i;
        i++;
    } while(i<=n);
    printf("Suma este %d", sum);*/

    //7
    int l;
    scanf("%d", &l);
    if(l<0){
        do {
            scanf("%d", l);
        } while(l<0);
    }
    printf("%d%d", 4*l, l*l);
    return 0;
}
