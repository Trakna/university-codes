#include <stdio.h>

float calculo(){
    float sal,total=0;
    printf("Digite o salario: ");
    scanf("%f", &sal);
    if(sal >= 1000){
        total = sal + (sal * 0.10);
    }
    else {
        total = sal + (sal * 0.05);
    }
    return total;
}
void main(){
    float r;
    r = calculo();
    printf("O novo salario = %.lf\n", r);
}
