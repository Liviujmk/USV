
#include <stdio.h>

int main()
{
    int n,s=0;
    scanf("%d", &n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
        s+=v[i];
    }
    printf("\n");
    
    
    //1
    /*printf("v[0]= %d; v[n-1]=%d\n", v[0], v[n-1]);
    for(int i=0;i<n;i++){
        if(i%2==0) printf("%d--", v[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(v[i]%3==0) printf("%d==", v[i]);
    }*/
    
    //2 
    //printf("Suma este %d", s);
    
    //3 
    /*int sp = 0, pi = 1;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) sp+=v[i];
        else pi*=v[i];
    }
    printf("suma pare este %d\n", sp);
    printf("produsul impare este %d", pi);*/
    
    //4 
    
    /*int neg = 0, poz = 0;
    for(int i=0;i<n;i++){
        if(v[i]>=0) poz++;
        else neg++;
    }
    printf("num poz este %d\n", poz);
    printf("num neg este %d", neg);*/
    
    //5 
    /*float ma, nr=0, sma=0;
    for(int i=0;i<n;i++){
        if(v[i]>=4 && v[i] <= 9){
            nr++;
            sma+=v[i];
        }
    }
    ma = sma/nr;
    printf("MA este %.2f", ma);*/
    
    // 6 
    /*int sp = 0, pi = 1;
    for(int i=0;i<n;i++){
        if(i%2==0) sp+=v[i];
        else pi*=v[i];
    }
    printf("suma poz pare este %d\n", sp);
    printf("produsul poz impare este %d", pi);*/
    
    //7 
    /*int max = 0;
    for(int i=0;i<n;i++){
        if(v[i]>max) max=v[i];
    }
    printf("Max din vector este %d", max);*/
    
    //8 
    /*int inm = 5;
    for(int i=0;i<n;i++){
        v[i]*=5;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ", v[i]);
    }*/
    
    //9 
    
    /*int val = 20, gasit = 0;
    for(int i=0;i<n;i++)
        if(v[i] == val) {gasit = 1; break;}
    
    if(gasit) printf("nr %d a fost gasit", val);
    else printf("Nr. %d nu a fost gasit", val);*/
    
    // Probleme 9/9; 
    
    // suplimentare
    //1
    /*float ma, nr=0, sma=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            nr++;
            sma+=v[i];
        }
    }
    ma = sma/nr;
    printf("MA este %.2f", ma);*/
    
    //2 
    int max = 0;
    for(int i=0;i<n;i++){
        if(v[i]>max) max=v[i];
    }
    printf("Max este pe pozitiile: ");
    for(int i=0;i<n;i++){
        if(v[i]==max) printf("%d, ", i);
    }
    
    
}
