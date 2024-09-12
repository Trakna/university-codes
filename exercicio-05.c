#include <stdio.h>

int main(){
    int idade_maior = 0, idade = 0, mulheres = 0;
    char  sexo, olhos , cabelo;
    
    while(idade >= 0){
        printf("Digite -1 para encerrar\n");
        printf("Digite a sua idade: \n");
        scanf("%d", &idade);
        if(idade == -1)
        break;
        printf("Aperte F para Feminino e M para masculino : \n");
        scanf(" %c", &sexo);
        printf("Voce e loiro(a)?\nS-Sim\nN-Nao\n");
        scanf(" %c", &cabelo);
        printf("Seus olhos sao verdes?\nS-Sim\nN-Nao\n");
        scanf(" %c", &olhos);
        if (idade > idade_maior)
        idade_maior = idade;
        if (sexo == 'f'|| sexo == 'F')
        {
            if((cabelo == 's'|| cabelo =='S') && (olhos == 's'|| olhos == 'S'))
            {
                if(idade >= 18 && idade <= 35)
                mulheres++;
            }
        }
    }
    printf("A maior idade e : %d\n", idade_maior);
    printf("O numero de mulheres que atendem aos padroes sao: %d\n", mulheres);

    return 0;
}