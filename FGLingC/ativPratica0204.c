//
//  ativPratica0204.c
//  FGLingC
//
//  Created by Gabriel Neves on 08/04/2018.
//  Copyright © 2018 Gabriel Neves. All rights reserved.
//

//Construa um algoritmo que, tendo como dados de entrada o preço de um produto e um código de origem, limpe a tela e mostre como saída o preço junto de sua origem (ex. 500,00– Sul). Caso o código não seja nenhum dos especificados, o produto deve ser encarado como importado.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int codigo;
    float preco = 0;
    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    printf("Informe o codigo do produto: ");
    scanf("%d", &codigo);
    if(codigo == 1){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Sul.\n", preco);
    }else if(codigo == 2){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Norte.\n", preco);
    }else if(codigo == 3){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Leste.\n", preco);
    }else if(codigo == 4){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Oeste.\n", preco);
    }else if(codigo == 5 || codigo == 6){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Nordeste.\n", preco);
    }else if(codigo >= 7 && codigo <= 9){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Sudeste.\n", preco);
    }else if(codigo >= 10 && codigo <= 20){
        printf("Preco do produto eh: %.2f e a origem do produto ==> Centro Oeste.\n", preco);
    }else{
        printf("Preco do produto eh: %.2f e a origem do produto ==> importado.\n", preco);
    }
    
    return 0;
}
