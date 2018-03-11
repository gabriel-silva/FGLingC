/*
 ativ8.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Receber um nome e imprimir as letras na posição impar.
 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char nome[20];
    int i;
    
    printf("Insira um nome: ");
    fgets(nome, 20, stdin);
    for(i = 0; i < strlen(nome)-1; i++){
        if(i % 2 == 1){
            printf("%c", nome[i]);
        }
    }
    printf("\n");
    
    return 0;
    
}


