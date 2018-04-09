//
//  ativPratica0205.c
//  FGLingC
//
//  Created by Gabriel Neves on 08/04/2018.
//  Copyright © 2018 Gabriel Neves. All rights reserved.
//

//Faça um programa para ler três números positivos e escrevê-los em ordem
//crescente.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 0, num2 = 0, num3 = 0, aux = 0;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);
    
    if(num > num2){
        aux = num2;
        num2 = num;
        num = aux;
    }
    if(num > num3){
        aux = num3;
        num3 = num;
        num = aux;
    }if(num2 > num3){
        aux = num3;
        num3 = num2;
        num2 = aux;
    }
    printf("%d %d %d\n", num, num2, num3);
    
    return 0;
}

