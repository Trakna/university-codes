#include <stdio.h>

void calculo(){
    float sal,total=0;
    printf("Digite o salario: ");
    scanf("%f", &sal);
    if(sal >= 1000){
        total = sal + (sal * 0.10);
    }
    else {
        total = sal + (sal * 0.05);
    }
    printf("O seu novo salario = %.lf\n", total);
}
void main(){
    calculo();
}
