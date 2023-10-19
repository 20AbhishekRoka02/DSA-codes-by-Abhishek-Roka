/*
p(x) = ax^n + bx^n-1 + cx^n-2 + .... + z
p(x) = sigma(ai,xe)

Polynomial has:-
ai -> coefficient
e -> exponent value

x -> is variable, to be decided on every case.
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int a;
    int expo;
} polynomial;

void readPoly(polynomial * poly, int terms){
    int coeff=0, exponent = 0; 
    for (int i = 0; i < terms; i++)
    {
        printf("Enter coffient of term no.%d: ",i);
        scanf("%d", &coeff);
        (poly+i)->a = coeff;
        printf("Enter exponent: ");
        scanf("%d", &exponent);
        (poly+i)->expo = exponent;
    }
    printf("\n\nINSERTION COMPLETED!\n\n");
    
}

void printPoly(polynomial * poly, int terms){
    printf("\n\nDISPLAYING POLYNOMIAL\n\n");

    for (int i = 0; i < terms; i++)
    {
        printf("%dx^%d",(poly+i)->a, (poly+i)->expo);
        if (i!=terms-1){
            printf("+");
        }
    }
    
}

int main(){
    polynomial*  term;

    int terms;
    printf("How many terms would you like to enter?\n");
    scanf("%d", &terms);

    term = (polynomial *) malloc(sizeof(polynomial) * terms);

    readPoly(term,terms);
    printPoly(term,terms);
    return 0;
}

