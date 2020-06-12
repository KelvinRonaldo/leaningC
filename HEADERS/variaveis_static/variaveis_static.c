#include <stdio.h>
#include <stdlib.h>
#include "headers\incremento.h"


int main(void){

    int numero;

    for(int i = 0; i < 5; i++){
        numero = incrementar();
        printf("%d\n", numero);        
    }
    
    return 0;

} 