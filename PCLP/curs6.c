
#include <stdio.h>

int main()
{
    int n, nr,max=0;
    int s[100];
    scanf("%d",&n);
    
    // mod 1
    /*for(int i=1;i<=n;i++) {
        scanf("%d", &nr);
        if(max<nr)
            max = nr;
    }*/
    
    // mod 2
    /*for(int i=1;i<=n;i++) {
        scanf("%d", &nr);
        s[i] = nr;
    }
    for(int i=1;i<=n;i++) {
        if(max<s[i])
            max = s[i];
    }*/
    printf("\nMax = %d", max);
    return 0;
}
