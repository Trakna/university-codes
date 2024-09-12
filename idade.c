#include <stdio.h>

int main(){
    unsigned short int dias, meses, anos;

    printf("Digite sua quantidade de anos para ser calculado:\n");
    scanf("%hd", &anos);
    printf("Digite sua quantidade de meses para ser calculado:\n");
    scanf("%hd", &meses);
    printf("Digite sua quantidade de dias para ser calculado:\n");
    scanf("%hd", &dias);
    meses = (anos * 12) + meses;
    dias = (meses * 30) + dias;

    printf("Sua idade em dias e de : %hd\n ", dias);

return 0;
}