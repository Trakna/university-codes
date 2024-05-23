#include <stdio.h>

int soma(int x, int y){
    int s;
    s = x + y;
    return s;
}
void main(){
    int a, b, r;
    printf("Digite o primeiro numero; ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    r = soma(a,b);
    printf("O resultado da soma = %d\n", r);
}
