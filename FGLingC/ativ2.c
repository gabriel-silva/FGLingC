
/*
 
 ativ2.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 
 Ler nome, endereço, telefone, limpar tela e imprimir na tela as 3 informações.

 */



#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char nome[50];
    char endereco[200];
    char telefone[10];
    
    printf("Informe seu nome: ");
    fgets(nome, 50, stdin);
    printf("Informe seu endereco: ");
    fgets(endereco, 200, stdin);
    printf("Informe seu telefone: ");
    fgets(telefone, 10, stdin);
    system("cls");
    printf("Nome informado: %s\n Endereco informado: %s\n Telefone informado: %s\n", nome, endereco, telefone);
    
    
    return 0;
}
