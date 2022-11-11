#include <stdio.h>
#include <stdlib.h>

int main()
{
    //NOTA:
    int n,inc1=0;
    do {
        if(inc1)
            printf("Mai citeste o data: \n");
        else
            printf("Citeste n: \n");
        scanf("%d", &n);
        inc1++;
    } while(n<1 || n>1200);

    //3
    /*int nrDeUnu = 0;
    int aux = n;
    while(aux){
        if(aux%2==1)
            nrDeUnu++;
        aux/=2;
    }
    printf("Nr de 1 in scrierea binara a lui 'n' este: %x\n", nrDeUnu);

    //4
    int nr, s=0, j=0;
    float ma;
    printf("Cititi n numere: \n");
    for(int i=1;i<=n;i++) {
        printf("nr%d =  ", i);
        scanf("%d", &nr);
        printf("\n");
        int clone = nr;
        if(nr>-100 && nr<0) {
            j++;
            s+=nr;
        }
    }
    ma = s/j;
    printf("Media aritmetica a numerelor negative de doua cifre este: %.2f\n\n", ma);
*/
    //5
    int numere;
    for(int i=1;i<=n;i++) {
        printf("nr%d =  ", i);
        scanf("%d", &numere);
        printf("\n");
        if(numere>=10){
            int produsCifrePare = 1;
            int clone = numere;
            int nrCifre=0, fake=0;
            while(clone) {
                nrCifre++;
                ((clone%10)%2==0)?produsCifrePare*=(clone%10):fake++;
                clone/=10;
            }
            if(fake!=nrCifre){
                printf("Produsul cifrelor pare al lui nr este: %d \n", produsCifrePare);
                int sum=0, nrCifreProdus=0;
                float medar;
                if(produsCifrePare>=10){
                    while(produsCifrePare) {
                        sum+=(produsCifrePare%10);
                        nrCifreProdus++;
                        produsCifrePare/=10;
                    }
                    medar=sum/nrCifreProdus;
                    printf("Iar media aritmetica a cifrelor acestui produs este: %.2f\n", medar);
                }
            }
            else
                printf("Nr nu are cifre pare\n");
        }
    }
    return 0;
}
