#include <stdio.h>

void calculo(float sal){
    float total;
    if(sal >= 1000){
        total = sal + (sal * 0.10);
    }
    else {
        total = sal + (sal * 0.05);
    }
    printf("O novo salario = %.lf", total);
}
void main(){
    float salario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    calculo(salario);
}
