#include <stdio.h>

int main(){
    
    int valor1, contagem = 0, soma = 0;
    float media = 0;
    media = 0;
    for(valor1 = 13; valor1 <=73  ; valor1 ++){
        printf("%d\n", valor1);
        soma = soma + valor1;
        contagem++;
    }
    media = soma/contagem;
    printf("%f\n", media);


    return 0;
}