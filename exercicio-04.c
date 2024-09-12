#include <stdio.h>

int main ()
{
    int idade = 0, maior_idade = 0, menor_idade = 10000, salario_mulher = 0;
    float  salario_medio = 0, salario = 0, soma_salario = 0;
    char sexo;

    for ( int i = 0; i <= 15; i++){
        printf("digite o salario:\n");
        scanf("%f", &salario);
        printf("Digite a sua idade: \n");
        scanf("%d", &idade);
        printf("Digite o sexo\nF-Feminino\nM-Masculino: \n");
        scanf(" %c", &sexo);
        if ((sexo == 'f'|| sexo == 'F') && (salario <= 100))
            salario_mulher++;
        if (idade > maior_idade)
            maior_idade = idade;
        if(idade < menor_idade)
            menor_idade = idade;
        soma_salario += salario;        
        
    }
    salario_medio = (salario/15);
    printf("A idade mais alta e : %d\n", maior_idade);
    printf("A idade mais baixa e : %d\n", menor_idade);
    printf("A quantidade de mulheres com salario em ate 100 reais e : %d\n", salario_mulher);
    printf("A media salarial e de : %f\n", salario_medio);

    return 0;
}
