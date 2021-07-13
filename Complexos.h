#ifndef COMPLEXOS_H_INCLUDED
#define COMPLEXOS_H_INCLUDED

//Defini��o da representa��o de dados

typedef struct{
int real;
int img;
} Complex;

//Defini��o das opera��es sobre Complex

Complex *create(int real, int img); //cria um n�mero complexo

Complex *sum(Complex *c1, Complex *c2); // soma dois n�meros complexos c1 e c2, gerando um terceiro

Complex *Substr(Complex *c1, Complex *c2); //subtrai um n�mero complexo c2 de outro c1, gerando um terceiro

Complex *multiply(Complex *c1, Complex *c2); //multiplica dois n�meros complexos c1 e c2, gerando um terceiro

Complex *pot(Complex *c1, Complex *c2); //potencializa um n�mero complexo c1 por outro c2, gerando um terceiro


#endif // COMPLEXOS_H_INCLUDED
