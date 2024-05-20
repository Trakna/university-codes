#include <stdio.h>

void main()
{
    int soma = 0, linha, coluna, n[3][3];
    printf("informe numeros para armazenar na matriz; \n");
    for (linha = 0; linha <=2; linha++)
    {
        for(coluna = 0; coluna <=2; coluna++)
        {
            printf("n[%d][%d] = ", linha, coluna);
            scanf("%d", &n[linha][coluna]);
            if(linha == coluna)
        {
            soma = soma + n[linha][coluna];
        }
        }
    }
    printf("\n");
    for(linha = 0; linha <= 2; linha++)
    {
        for(coluna = 0; coluna <= 2; coluna++)
        {
            printf("%d \t", n[linha][coluna]);
        }
        printf("\n");
    }
    printf("\nA soma dos valores da diagonal principal = %d \n", soma);
}
