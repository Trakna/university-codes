#include <stdio.h>

int main(){
    float salario = 0, salario_medio = 0, media_filhos = 0, soma_salario = 0, salario_maior = 0, salario100 = 0, salario_porcentagem = 0;
    int numero_de_filhos = 0, soma_filhos = 0, contagem = 0;
    while(numero_de_filhos >= 0)
    {
        printf("Digite -1 para sair \n");
        printf("Digite o numero de filhos: \n");
        scanf("%d", &numero_de_filhos);
        if (numero_de_filhos <= -1)
            break;
        printf("Digite o salario: \n");
        scanf("%f", &salario);
        if (salario > salario_maior)
            salario_maior = salario;
        contagem++;
        if(salario <= 100)
            salario100++;
        soma_salario += salario;
        soma_filhos += numero_de_filhos;
    }
    salario_porcentagem = (salario100/contagem)* 100 ;
    media_filhos = (float)soma_filhos/contagem;
    salario_medio = (soma_salario/contagem);
    printf("A media salarial e de: %.2f\n", salario_medio);
    printf("A media de filhos e de : %.2f\n", media_filhos);
    printf("O percentual de pessoas que ganahm ate 100 reais e de: %.2f\n", salario_porcentagem);
    printf("O maior salario e de: %.2f\n", salario_maior);
    
    
    return 0;
}