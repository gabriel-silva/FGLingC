//
//  ativPratica0206.c
//  FGLingC
//
//  Created by Gabriel Neves on 08/04/2018.
//  Copyright © 2018 Gabriel Neves. All rights reserved.
//

//Faça um programa para ler dois números inteiros A e B e informar se A é divisível por B.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 0, b = 0;
    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    
    if(a % b == 0){
        printf("o numero %d eh divisivel por %d\n", a, b);
    }else{
        printf("o numero %d nao eh divisivel por %d\n", a, b);
    }
    
    return 0;
}
