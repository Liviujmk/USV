#include <stdio.h>

int main()
{
    int v[100], nr;
    scanf("%d", &nr);
    int i, aux;
    for(i=0;i<100;i++){
        if(nr%2==0) v[i]=0;
        else v[i]=1;
        
        nr/=2;
        aux=i;
        if(nr==0) break;
    }
    for(int j=i;j>=0;j--) {
        printf("%d", v[j]);
    }
    return 0;
}
