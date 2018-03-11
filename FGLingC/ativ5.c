/*
 ativ5.c
 FGLingC
 
 Created by Gabriel Neves on 10/03/2018.
 Copyright © 2018 Gabriel Neves. All rights reserved.
 
 Solicitar no teclado uma frase com no máximo 40 letras. Se o tamanho for maior que 40, dar uma mensagem de entrada inválida e solicitar novamente, se passar, imprimir a frase na vertical com uma letra em cada linha.
 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char frase[60];
    int i;
    
    printf("Informe uma frase com 40 caracteres: ");
    fgets(frase, 60, stdin);
    
    while((strlen(frase)-1) > 40){
        printf("Entrada Invalida, Informe novamente: ");
        fgets(frase, 60, stdin);
    }
    
    for(i = 0; i < strlen(frase)-1; i++){
        printf("%c\n", frase[i]);
    }
    
    return 0;
}

