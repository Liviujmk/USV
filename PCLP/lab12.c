#include<stdio.h>
void citeste_vector(int*, int[]);
void afiseaza_vector(int, int[]);
int main()
{
    int n, vect[20];
    int sw;
    do{
        scanf("%d", &sw);
        switch(sw){
        case 1:
            citeste_vector(&n, vect);
            printf("\n");
            break;
        case 2:
            afiseaza_vector(n, vect);
            printf("\n");
            break;
        case 3:
        }
    }
    return 0;
}
void citeste_vector(int* dim, int v[])
{
    int i, val;
    printf("\nDati dimensiunea vectorului:");
    scanf("%d",dim); // nu se mai pune operatorul de adresare (&),
    // pentru ca dim este deja o adresa
    printf("\nDati elementele vectorului:");
    // pentru ca dim este o adresa,
    // valoarea continuta la acea adresa se preia cu
    // operatorul ‘*’
    for(i=0; i<*dim; i++)
    {
        printf("\nv[%d] = ",i);
        scanf("%d", &v[i]);
    }
}
void afiseaza_vector(int dim, int v[])
{
    int i;
    printf("\nVectorul citit este: ");
    for(i=0; i<dim; i++)
        printf("%d, ", v[i]);
    printf("\b\b.");
}
