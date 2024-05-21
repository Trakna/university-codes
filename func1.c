#include <stdio.h>

void soma()
{
    int a, b, s;
    printf("digite o primeiro numero:  ");
    scanf("%d", &a);
    printf("digite o segundo valor: ");
    scanf("%d",&b);
    s = a + b;
    printf("o resultado da soma = %d\n", s);
}
void main()
{
    soma();

}
