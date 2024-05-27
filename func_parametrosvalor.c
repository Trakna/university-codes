#include <stdio.h>

int soma_dobro(int x, int y){
    int s;
    x = x * 2;
    y = y * 2;
    s = x + y;
    return s;
}
void main(){
    int a, b, r;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    r = soma_dobro(a,b);
    printf("O resultado da soma = %d\n", r);
    printf("O valor de a = %d e b = %d\n", a, b);
}
