/*
 ativ10.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Digitar um nome e solicitar que seja mostrado em maiúsculo na tela.
 
 */


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char nome[20];
    int i;
    
    printf("Insira um nome: ");
    fgets(nome, 20, stdin);
    
    for(i = 0; i < strlen(nome)-1; i++){
        printf("%c", toupper(nome[i]));
    }
    printf("\n");
    
    return 0;
    
}




