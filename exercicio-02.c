#include <stdio.h>

int main (){
    int codigo = 1, quantidade = 0, numero_atual = 0, 
    soma_do_primeiro = 0;
    float media_tudo = 0;
    while (codigo != 0)
    {
        printf("Digite o codigo : ");
        scanf("%d", &codigo);

        if (codigo != 0)
        {
            printf("Digite os numeros para serem  calculados: ");
            scanf("%d", &numero_atual);
            
            if((numero_atual % 2) == 0)
            {
                soma_do_primeiro += numero_atual;
                quantidade++;
            }
        }
    }
    if (quantidade == 0){
        quantidade = 1;
    }

    media_tudo = (float)soma_do_primeiro/(float)quantidade ;
    printf("A Media dos pares e de : %.2f\n", media_tudo);

    return 0;
}
