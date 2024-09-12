#include <stdio.h>

int main(){
    short int idade;

    printf("Digite a idade do nadador:\n");
    scanf("%hd", &idade);
    if (idade >= 5 && idade <= 7)
    printf("O atleta esta na categoria infantil A");
    else if (idade >= 8 && idade <= 10)
    printf("O atleta esta na categoria infantil B");
    else if (idade >= 11 && idade <= 13)
    printf("O atleta esta na categoria Juvenil A");
    else if(idade >= 14 && idade <= 17)
    printf("O atleta esta na categoria Juvenil B");
    else
    printf("O atleta esta na categoria Adulto");

return 0;
}