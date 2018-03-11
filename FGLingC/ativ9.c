/*
 ativ9.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Receber um nome do teclado e imprimi-lo de trás pra frente.
 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char nome[20];
    int i;
    
    printf("Insira um nome: ");
    fgets(nome, 20, stdin);
    
    for(i = (int)strlen(nome); -1 < i; i--){
        printf("%c", nome[i]);
    }
    printf("\n");
    
    return 0;
    
}



