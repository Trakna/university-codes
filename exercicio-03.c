#include <stdio.h>

int main(){
    float valor_desconhecido = 0;
    int quantidade1 = 0, quantidade2 = 0, quantidade3 = 0, quantidade4 = 0;
    do{
        printf("Digite um numero:  ");
        scanf("%f", &valor_desconhecido);

        if (valor_desconhecido >=  0 && valor_desconhecido <= 25)
            quantidade1++; 
        else if (valor_desconhecido >= 26 && valor_desconhecido <= 50)
            quantidade2++;
        else if (valor_desconhecido >= 51 && valor_desconhecido <= 75)
            quantidade3++; 
        else if (valor_desconhecido >= 76 && valor_desconhecido <= 100)
            quantidade4++; 
        else
            printf("nao faz parte de nenhum intervalo de 0 a 100 \n");
        
    }while(valor_desconhecido >= 0);

    printf("Os valores que passaram pelo intervalo um sao : %d\n", quantidade1);
    printf("Os valores que passaram pelo intervalo dois sao : %d\n", quantidade2);
    printf("Os valores que passaram pelo intervalo tres sao : %d\n", quantidade3);
    printf("Os valores que passaram pelo intervalo quatro sao : %d\n", quantidade4);
return 0;        
}
