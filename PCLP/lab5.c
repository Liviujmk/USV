#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1
    /*printf("Tabla inmultirii de la 1 la 10\n\n");
    for(int i=1; i<=10;i++) {
        printf("\n");
        for(int j=0;j<=10;j++) {
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }*/

    //2
    /*int n,inv=0,aux;
    scanf("%d", &n);
    aux=n;
    while(n) {
        inv = inv*10 + (n%10);
        n/=10;
    }
    if(aux == inv)
        printf("palindrom");
    else
        printf("nu e palindrom");*/

    //3
    /*int n,nr=0;
    scanf("%d", &n);
    int p=1;
    while(n) {
        if((n%10)%2==1){
            nr = nr + (n%10)*p;
            p*=10;
        }
        n/=10;
    }
    printf("%d", nr);*/

    //4
    /*int n;
    scanf("%d", &n);
    int p=0;
    while(n) {
        if(n%2==1){
            p++;
        }
        n/=2;
    }
    printf("%d", p);*/

    //5
    /*int n,nr,p=0,s=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &nr);
        if(nr%10==7) {
            p++;
            s+=nr;
        }
    }
    float ma = s/p;
    printf("%f", ma);*/

    //6
    /*int n,nr,p=0,s=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &nr);
        for(int d=2;d<=nr/2;d++)
            if(nr%d==0)
                s=1;
        if(s==0)
            printf("%d", nr);
    }*/


    return 0;
}
