//
//  ativPratica0203.c
//  FGLingC
//
//  Created by Gabriel Neves on 08/04/2018.
//  Copyright © 2018 Gabriel Neves. All rights reserved.
//

//Faça um algoritmo que leia dois número se indique se são iguais ou se são diferentes.
//Mostre o maior e o menor(nesta sequência).

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 0, num2 = 0;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    if(num == num2){
        printf("os numeros %d e %d são iguais.\n", num, num2);
    }else{
        if(num > num2){
            printf("os numeros %d e %d são diferentes, o numero %d é maior que o %d.\n", num, num2, num, num2);
        }else{
            printf("os numeros %d e %d são diferentes, o numero %d é maior que o %d.\n", num2, num, num2, num);
        }
    }
    
    return 0;
}
