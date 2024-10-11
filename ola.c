#include <stdio.h>
#include <stdlib.h>    //https://github.com/ifmt-cba/lingprog20242

void main ( ){
    int x = 0; //Valor de variavel Inteira
    printf("Valor de x: %d\n",x);
    x++; //Incrementando valor de x para uma unidade
    printf("Valor de x: %d\n",x);
    float y = 12.342424; //Valor de variavel Real
    printf("Valor de y: %f\n",y);
    printf("Valor de y: %.2f\n",y);//.2f utilizado para imprimir resultado com 2 casas decimais
    char sexo = 'M'; //Variavel que aceita uma caractere (sempre enter ' ' não "")
    printf("Sexo: %c\n",sexo);
    //Criando variável tipo String(Texto)
    char nome[30] = "Raphaew";
    printf("Nome: %s\n",nome);
    printf("Primeira letra do nome: %c\n",nome[0]);
    printf("\nDigite o valor de x:");
    scanf("%d",&x);
    printf("O valor digitado foi de %d", x );
    printf("Olá, Mundo!");
}