#include <stdio.h>

int soma(int a, int b){
    return a+b;
}
int main(void){
    int a,b,c;
    printf("Hello World!");
    printf("\n\nDigite um valor: ");
    scanf("%d", a);
    printf("\nDigite um segundo valor a ser somado: ");
    scanf("%d", b);
    printf("O resultado da soma de %d com %d é %d",a,b,soma(a,b)); 
    
}