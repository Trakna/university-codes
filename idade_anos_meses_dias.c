#include <stdio.h>

int main(){
    unsigned int idade, anos, mes_resto, mes, dia_resto, dia;


    printf("Digite quantos dias deseja calcular:\n");
    scanf("%d", &idade);

    anos = idade /365; 
    mes_resto = idade % 365;
    mes = mes_resto / 30;
    dia_resto = mes_resto % 30;
    dia = dia_resto * 1;
    printf("Voce tem : %hd ano(s), %hd mes(es) e %hd dia(s)\n ", anos, mes, dia);


return 0;
}