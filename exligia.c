#include <stdio.h>
void main(){
    int inicial, fim, salto;
    char opcao;
    do {
        printf("Digite o numero inicial:");
        scanf("%d",&inicial);
        printf("Digite o numero final:");
        scanf("%d", &fim);
        printf("digite o salto:");
        scanf("%d", &salto);
        do{
            printf("%d\n", inicial);
            inicial = inicial + salto;
        }
        while(inicial <= fim);
        printf("\nTecle [s]para continuar ou [n] para terminar:");
        scanf("%c", &opcao);
        printf("\n");
    }
    while(opcao == 's' || opcao == 'S');
    printf("Terminou a contagem\n");
}
