#include <stdio.h>

int main(){
    float a, b, multiplos, teste;

    printf("Digite o valor de A : \n");
    scanf("%f", &a);
    printf("Digite o valor de B : \n");
    scanf("%f", &b);
    multiplos = a * b;
    teste = (multiplos/2) ;
    
    if (teste != 0)
    printf("O resultado e multiplo");
    else
    printf("o resultado nao e multiplo");

return 0;
}