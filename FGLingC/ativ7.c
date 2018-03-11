/*
 ativ7.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Receber um nome e imprimir as 4 primeiras letras do nome.
 
 */


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char nome[20];
    int i;
    
    printf("Insira um numero: ");
    fgets(nome, 20, stdin);
    for(i = 0; i < 4; i++){
        printf("%c", nome[i]);
    }
    printf("\n");
    
    return 0;
    
}

