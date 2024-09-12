#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite o valor de a:\n");
    scanf("%f", &a);
    printf("Digite o valor de b:\n");
    scanf("%f", &b);
    printf("Digite o valor de c:\n");
    scanf("%f", &c);

    if(a > b && a > c)
    printf(" O maior valor e A ");
    else if(b > a && b > c)
    printf("O maior valor e B ");
    else
    printf("O maior valor e C");


return 0;
}