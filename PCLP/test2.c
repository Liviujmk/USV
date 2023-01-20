#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int nrP=8,prb;
    char s[100];
    do {
        scanf("%d", &prb);

        switch(prb){
        case 1:
            citire(s);
            break;
        case 2:
            afisare(s);
            break;
        case 3:
            printf("Nume Student: Liviu Mitrofan \n");
            printf("Grupa: 3111A \n");
            break;
        case 4:
            exit(0);
            break;
        case 5:
            nrVocsiCons(s);
            break;
        case 6:
            negativ(s);
            break;
        case 7:
            eliminare(s);
            break;
        case 8:
            //pref(s);
            break;
        default:
            printf("Introdu un nr corect!\n");
        }
    }while(prb<=8);
    return 0;
}

//*functii
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void citire(char s[])
{
    gets(s);
}

void afisare(char s[])
{
    for(int i=0; i<strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    //getch();
    printf("\n");
}

void nrVocsiCons(char s[])
{
    char voc = "aeiouAEIOU";
    char cons = "bcdfghjklmnqrstvwxyzBCDFGHJKLMNQRSTVWXYZ";
    int nrv=0, nrc=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(strchr("aeiouAEIOU", s[i])) nrv++;
        if(strchr("bcdfghjklmnqrstvwxyzBCDFGHJKLMNQRSTVWXYZ", s[i])) nrc++;
    }
    printf("Nr de vocale este %d iar nr de consoane este %d \n", nrv, nrc);
}

void negativ(char s[])
{
    int nrNeg=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(strstr(s, "nu") || strstr(s, "n-")) nrNeg++;
    }
    printf("Nr. de negatii de este:%d \n", nrNeg);
}

void eliminare(char s[])
{
    int nrNeg=0;
    int maxL=0;
    char cpy[100];
    char *p = strtok(s, " ");
    while(p!=NULL){
        if(strchr("aeiouAEIOU", p[0])) strcpy(p, p+1);
        if(maxL<strlen(p)){
            maxL = strlen(p);
            strcpy(cpy, p);
        }
        p=strtok(NULL," ");
    }
    printf("Cel mai lung sir format este: %s \n", cpy);
}
/*
void pref(char s[]){
    int l;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[)
    }
}*/


//head

#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


void citire(char s[]);
void afisare(char s[]);
void nrVocsiCons(char s[]);
void negativ(char s[]);
void eliminare(char s[]);
void pref(char s[]);



#endif // HEADER_H_INCLUDED
