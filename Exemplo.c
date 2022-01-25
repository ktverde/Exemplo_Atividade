#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    return a+b;
}
int multi(int a, int b){
    return a*b;
}
int main(void){
    //Variáveis
    int a,b,c;

    //Código
    printf("Hello World!");
    printf("\n\nDigite um valor: ");
    scanf("%d", a);
    printf("\nDigite um segundo valor a ser somado: ");
    scanf("%d", b);

    //Saídas
    printf("\nO resultado da soma de %d com %d é %d",a,b,soma(a,b)); 
    printf("\nE o resultado da multiplicação é %d", multi(a,b));
}