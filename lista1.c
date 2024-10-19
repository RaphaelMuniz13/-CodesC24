#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Raphaew Muniz");
}
//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2 (){
    printf("30*27 = %d",30*27);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3(){
    float media = (5+8+12)/3.0;
    printf("Média de 5+8+12/3 = %.1f\n",media);
}
//4. Faça um programa que leia e imprima um número inteiro.
void q4(){
    int num = 0;
    printf("Digite o valor numérico inteiro: ");
    scanf("%d", &num);
    printf("O valor digitado foi %d\n",num);
}
//5. Faça um programa que leia dois números reais e os imprima.
void q5 (){
    float real=0;
    float real2=0;
    printf("Digite o valor primeiro valor real:");
    scanf("%f",&real);
    printf("Digite o segundo valor real:");
    scanf("%f",&real2);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6(){
    int num,antecessor,sucessor;
    printf("Digite um número: ");
    scanf("%d",&num);
antecessor= num-1;
sucessor= num+1;
printf("O Antecessor é = %d\n e o Sucessor é = %d\n ",antecessor,sucessor);
    }
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
#include <stdio.h>

void q7() {
    char nome[30];
    char endereco[50];
    char telefone[12];

    printf("Digite seu nome: ");
    scanf("%29s", nome);  
    
    printf("Digite seu endereço (sem espaços): ");
    scanf("%49s", endereco);

    printf("Digite seu telefone ex(0xx 9xxxx-xxxx): ");
    scanf("%11s", telefone); 

    printf("\nNome: %s\nEndereço: %s\nTelefone: %s\n", nome, endereco, telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8(){
    int V1,V2;
    printf("Escreva o valor de V1 = ");
    scanf("%d",&V1);

     printf("Escreva o valor de V2 = ");
    scanf("%d",&V2);

    printf("A Subtração de V1 - V2 = %d",V1-V2);
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q9(){
    float real;
    printf("Digite um valor Real = ");
    scanf("%f",&real);
printf("o resultado de ¼ de Real é = %.2f\n",real/4);

}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10(){
    float a,b,c;
    printf("Escreva o valor de A:");
    scanf("%f",&a);

    printf("Escreva o valor de B:");
    scanf("%f",&b);
    
    printf("Escreva o valor de C:");
    scanf("%f",&c);
    printf("O Resultado a Média aritmética é =%.2f\n",(a+b+c)/3);
    
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11(){
    float a,b;
    printf("Escreva o valor de A:");
    scanf("%f",&a);
    printf("Escreva o valor de B:");
    scanf("%f",&b);
    printf("A SOMA É = %.2F\n",a+b);
     printf("A SUBTRAÇÃO É = %.2F\n",a-b);
      printf("A MULTIPLICAÇÃO É = %.2F\n",a*b);
       printf("A DIVISÃO É = %.2F\n",a/b);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12(){
    float a;
    printf("Escreva o valor de A:");
    scanf("%f",&a);
    printf("A AO QUADRADO OU A² = %.1f\n",a*a);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13(){
    float saldo;
    printf("Digite seu saldo atual:");
    scanf("%f",&saldo);

    printf("Seu saldo após o realjuste será: %.2f\n",saldo+saldo*0.2);
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14(){
    float base,altura;
    printf("Escreva o tamanho da base do retangulo");
    scanf("%f",&base);
      printf("Escreva o tamanho da altura do retangulo");
    scanf("%f",&altura);

    printf("o perimetro do retângulo é = %.2f\n",(base*2 + altura*2));
    printf("A Area do retângulo é = %.2f\n",(base * altura));
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15(){
    float produto,desconto;
    printf("Digite o valor do Produto: ");
    scanf("%f",&produto);
    printf("Digite a porcentagem de Desconto (EX:Para 10 porcento = 0.1)  ");
    scanf("%f",&desconto);
    printf("O valor do produto é: %.2f\n",produto-(produto*desconto));

}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
q15();
    return EXIT_SUCCESS;
}