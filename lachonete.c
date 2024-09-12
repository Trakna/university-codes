#include <stdio.h>
int main (){
    float codigo, quantidade;

    printf("Digite a quantidade :\n");
    scanf("%f",&quantidade);
    printf("Digite o codigo do produto:\n");
    scanf("%f", &codigo);
    if(codigo == 100)
    {
        quantidade = (quantidade * 1.20);
        printf("O valor do seu cachorro quente e : %.2f", quantidade);
    }
    else if(codigo == 101)
    {
        quantidade = (quantidade * 1.30);
        printf("O valor do seu Bauru simples: %.2f", quantidade);
    }
    else if(codigo == 102)
    {
        quantidade = (quantidade * 1.50);
        printf("O valor do seu Bauru com ovo: %.2f", quantidade);
    }
    else if(codigo == 103)
    {
        quantidade = quantidade * 1.20;
        printf("O valor do seu Hamburger: %.2f", quantidade);
    }
    else if(codigo == 104)
    {
        quantidade = quantidade * 1.30;
        printf("O valor do seu Cheeseburguer: %.2f", quantidade);
    }
    else
    {
        quantidade = quantidade * 1.00;
        printf("O valor do seu Refrigerante: %.2f", quantidade);
    }
return 0;
}