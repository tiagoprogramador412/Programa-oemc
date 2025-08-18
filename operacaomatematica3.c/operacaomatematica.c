#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento (++a)
    Pós-Incremento(a++)
    Decremento(--)
    Pré-Decremento(--a)
    Pós-Decremento(a--)
    */

    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    resultado = numero1++;
    //printf("Apos incremento: %d\n", numero1);
    printf("Apos Pós-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);
    resultado = ++numero1;
    printf("Apos Pré-incremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("Apos decremento: %d\n", numero1);

    resultado = numero1--;
    printf("Apos Pós-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos Pré-decremento - numero1: %d - Resultado: %d\n", numero1, resultado);




}