/*
Alunos:                 RA:

Vinicius Solon Silva    2760482011020

Matheus Bosco           2760482011034

Rafael Neder            2760482011026

Felipe Costa            2760482011015

Guilherme Brunelli      2760482011050
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Complexos.h"

int main()
{
    int r1,r2,i1,i2;

    printf("\nDigite o primeiro numero real (r1): ");
    scanf("%d",&r1);
    printf("\nDigite o primeiro numero imaginario (i1): ");
    scanf("%d",&i1);

    printf("\nDigite o segundo numero real (r2): ");
    scanf("%d",&r2);
    printf("\nDigite o segundo numero imaginario (i2): ");
    scanf("%d",&i2);

    // Criando os no's complexos:
    Complex *c1 = (Complex*)malloc(sizeof(Complex));
    Complex *c2 = (Complex*)malloc(sizeof(Complex));
    c1 = create(r1,i1);
    c2 = create(r2,i2);

    // Somando os no's complexos:
    Complex *soma = (Complex*)malloc(sizeof(Complex));
    soma = sum(c1, c2);

    // Subtraindo os no's complexos:
    Complex *subtrai = (Complex*)malloc(sizeof(Complex));
    subtrai = Substr(c1, c2);

    // Multiplicando os no's complexos:
    Complex *mult = (Complex*)malloc(sizeof(Complex));
    mult = multiply(c1,c2);

    // Potenciação dos no's complexos:
    Complex *poten1 = (Complex*)malloc(sizeof(Complex));
    poten1 = pot(c1,c2);
    Complex *poten2 = (Complex*)malloc(sizeof(Complex));
    poten2 = pot(c1,c2);

    // Imprimindo dados na tela:
    printf("\n\n");
    printf("\n\n Resultado da Soma de c1 e c2: %d + %di", soma->real, soma->img);
    printf("\n\n Resultado da Subtracao de c1 e c2: %d + %di", subtrai->real, subtrai->img);
    printf("\n\n Resultado da Multiplicacao de c1 e c2: %d + %di", mult->real, mult->img);
    printf("\n\n Resultado da Potenciacao de c1 e c2: c1 = %d + %di \t c2 = %d + %di\n", poten1->real, poten1->img, poten2->real, poten2->img);

    // Liberando espaço de memória alocado no HEAP:
    free(c1);
    free(c2);
    free(soma);
    free(subtrai);
    free(mult);
    free(poten1);
    free(poten2);

    return 0;
}
