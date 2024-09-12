#include <stdio.h>
int main (){
    float codigo, quantidade;

    printf("Digite o codigo do produto:\n");
    scanf("%f", &codigo);
    printf("Digite a quantidade :\n");
    scanf("%f",&quantidade);
    if(codigo == 1001) 
    {
        quantidade = (quantidade * 5.32);
        printf("O valor do seu produto e : %.2f \n", quantidade);
    }
    else if(codigo == 1324)
    {
        quantidade = (quantidade * 6.45);
        printf("O valor do seu produto e : %.2f \n", quantidade);
    }
    else if(codigo == 6548)
    {
        quantidade = (quantidade * 2.37);
        printf("O valor do seu produto e : %.2f \n", quantidade);
    }
    else if(codigo == 987)
    {
        quantidade = quantidade * 5.32;
        printf("O valor do seu produto e : %.2f \n", quantidade);
    }
    else if(codigo == 7623)
    {
        quantidade = quantidade * 6.45;
        printf("O valor do seu produto e : %.2f \n", quantidade);
    }
    else
    {
        quantidade = quantidade * 1.00;
        printf("O valor do seu produto e : %.2f \n", quantidade);
    }
return 0;
}