#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Complexos.h"

// Cria��o
Complex *create(int real, int img){
    Complex *c = (Complex*)malloc(sizeof(Complex));
    c->real = real;
    c->img = img;
    return c;
}

// Soma
Complex *sum(Complex *c1, Complex *c2){
    Complex *sum_c = (Complex*)malloc(sizeof(Complex));
    sum_c->real = (c1->real) + (c2->real);
    sum_c->img = (c1->img) + (c2->img);
    return sum_c;
}

// Subtra��o
Complex *Substr(Complex *c1, Complex *c2){
    Complex *subs_c = (Complex*)malloc(sizeof(Complex));
    subs_c->real = (c2->real) - (c1->real);
    subs_c->img = (c2->img) - (c1->img);
    return subs_c;
}

// Multiplica��o
Complex *multiply(Complex *c1, Complex *c2){
    Complex *mult = (Complex*)malloc(sizeof(Complex));
    mult->real = (c1->real * c2->real) + (c1->img * c2->img * -1);
    mult->img = (c1->real * c2->img) + (c1->img * c2->real);
    return mult;
}

// Potencia��o
Complex *pot(Complex *c1, Complex *c2){
    int n, e;
    Complex *c3 = (Complex*)malloc(sizeof(Complex));
    Complex *c4 = (Complex*)malloc(sizeof(Complex));
    Complex *aux1 = (Complex*)malloc(sizeof(Complex));
    Complex *aux2 = (Complex*)malloc(sizeof(Complex));

    printf("\nInsira o expoente que ira elevar c1 e c2: ");
    scanf("%d",&n);

    if(n == 2){
        c3->real = (c1->real * c1->real) + (c1->img * c1->img * -1);
        c3->img = (c1->real * c1->img) + (c1->img * c1->real);
        c4->real = (c2->real * c2->real) + (c2->img * c2->img * -1);
        c4->img = (c2->real * c2->img) + (c2->img * c2->real);
    }
    if(n > 2){
        c3->real = (c1->real * c1->real) + (c1->img * c1->img * -1);
        c3->img = (c1->real * c1->img) + (c1->img * c1->real);
        c4->real = (c2->real * c2->real) + (c2->img * c2->img * -1);
        c4->img = (c2->real * c2->img) + (c2->img * c2->real);
        for (int i = 2; i < n; i++){
            aux1->real = c3->real;
            aux1->img = c3->img;
            aux2->real = c4->real;
            aux2->img = c4->img;
            c3->real = ((aux1->real * c1->real) + (aux1->img * c1->img * -1));
            c3->img = ((aux1->real * c1->img) + (aux1->img * c1->real));
            c4->real = ((aux2->real * c2->real) + (aux2->img * c2->img * -1));
            c4->img = ((aux2->real * c2->img) + (aux2->img * c2->real));
        }
    }

    printf("\nInsira qual numero deseja retornar (c1 = 1 ou c2 = 2): ");
    scanf("%d", &e);
    if(e == 1){
        return c3;
    }
    else if(e == 2){
        return c4;
    }
    else{
        printf("\n\nERRO!! Escolha incorreta!\n\n");
        return NULL;
    }


}
