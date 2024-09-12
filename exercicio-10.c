#include <stdio.h>

int main(){
    
    int numero = 0, contagem = 0, intervalo = 0, fora_intervalo = 0;

    for(contagem = 0; contagem <=9; contagem++){
        printf("Digite um valor: \n");
        scanf("%d", &numero);
        if (numero >= 10 && numero <= 20)
            intervalo++;
        else
            fora_intervalo++;
    }
    printf("O(s) numero(s) dentro do(s) intervalo(s) entre 10 e 20 e(sao) : %d \n", intervalo);
    printf("O(s) numero(s) fora do intervalo e(sao) :%d \n", fora_intervalo);

    return 0;
}