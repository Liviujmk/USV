#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char s[100];
    gets(s);
    printf("%s \n\n", s);
    int lg = strlen(s);*/

    //1
    /*for(int i=0;i<lg;i++)
        printf("%c-", s[i]);
    printf("\b \n");
    for(int i=lg-1;i>=0;i--)
        printf("%c,", s[i]);
    printf("\b \n");*/

    //2
    /*int nr=0;
    for(int i=0;i<lg;i++) {
        if(s[i]==' ')
            nr++;
    }
    printf("Nr de spatii este %d", nr);*/

    //meniu

    int c;
    char s[100];
    int nr, sm=0;
    do{
       scanf("%d", &c);
       switch(c){
        case 1: gets(s); int lg=strlen(s);  break;
        case 2: printf("%s \n\n", s); break;
        case 3:
            for(int i=0;i<lg;i++)
            {
                if(isdigit(s[i])){
                    nr++;
                    sm+=s[i]-'0';
                }
            }
            printf("Nr cifre = %d \n\n", nr);
            break;
        case 4:
            nr=0;
            for(int i=0 ;i<lg;i++)
            {
                if(isalpha(s[i]))
                    nr++;
            }
            printf("Nr litere = %d \n\n", nr);
            break;
        case 5: printf("Suma cifrelor sirului este %d \n", sm); break;
        case 6:

            if(strcmp(s, strrev(s))==0)
                printf("Sirul este palindrom \n\n");
            else
                printf("nu e palindrom \n\n");
            break;
        default: printf("default\n\n");
       }
    } while(c<=7);
    return 0;
}
