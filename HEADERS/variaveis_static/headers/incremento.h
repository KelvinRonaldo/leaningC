#include <stdio.h>

int incrementar(){

    static int numero = 50;

    numero += 2;

    return numero;
}