#include <stdio.h>

float calculo(float sal){
    float total;
    if(sal >= 1000){
        total = sal + (sal * 0.10);
    }
    else {
        total = sal + (sal * 0.05);
    }
    return total;
}
void main(){
    float salario, r;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    r = calculo(salario);
    printf("O novo salario = %.lf", r);
}
