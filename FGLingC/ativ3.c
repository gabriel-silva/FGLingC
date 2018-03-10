/*
 ativ3.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa e a palavra ACEITA. Caso contrario imprimir o nome e na outra linha: NAO ACEITA.
 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char nome[50];
    char sexo[20];
    int idade;
    
    printf("Informe seu nome: ");
    fgets(nome, 50, stdin);
    printf("Informe seu sexo: ");
    fgets(sexo, 50, stdin);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    //função strncmp verifica se uma string é igual a outra string.
    if(strncmp(sexo, "feminino", 8) == 0 && idade < 25){
        printf("nome: %s\n ACEITA\n", nome);
    }else{
        printf("NÃO ACEITA\n");
    }
    
    return 0;
}
