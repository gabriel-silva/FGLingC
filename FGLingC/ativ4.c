/*
 ativ4.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Receber do teclado a sigla do estado de uma pessoa e imprimir uma das seguintes mensagens:
 Carioca Paulista Mineiro
 Outros estados
 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char estado[3];
    
    printf("Informe seu estado com duas letras. ex.: RJ: ");
    fgets(estado, 3, stdin);
    
    if(strncmp(estado, "RJ", 2) == 0){
        printf("Carioca\n");
    }else if(strncmp(estado, "SP", 2) == 0){
        printf("Paulista\n");
    }else if(strncmp(estado, "MG", 2) == 0){
        printf("Mineiro\n");
    }else{
        printf("Outro estado.");
    }
    
    return 0;
}
