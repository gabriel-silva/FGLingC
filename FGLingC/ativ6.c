/*
 ativ6.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Ler um numero e se for maior que 20 imprimir a metade desse numero.
 
 */


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(num > 20){
        printf("metade de %d ==> %.2lf\n", num, (double) num/2);
    }
    
    return 0;
}


