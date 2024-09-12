#include <stdio.h>

int main(){
    float altura, soma;
    char sexo;

    printf("Escolha seu sexo: masculino ou feminino\n");
    scanf("%s", &sexo);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);


    if(sexo == ('m')){
        soma = (altura * 72.7) - 58;
        printf("O seu peso ideal e: %.2f\n", soma);
    }
    else
    {
        soma = (altura * 62.1) -44.7;
        printf("O seu peso ideal eh: %.2f\n", soma);
    }   
    return 0;
}