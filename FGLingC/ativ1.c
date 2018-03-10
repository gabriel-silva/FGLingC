
/*
 
 ativ1.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 
 Receber um nome no teclado e imprimi-lo dez vezes, cada nome em uma linha.
 
 */



#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char nome[50];
    int i;
    printf("Insira um nome: ");
    fgets(nome,50, stdin);
    for(i = 1; i <= 10; i++){
        printf("nº %d nome digitado: %s\n", i, nome);
    }
    
    return 0;
}
