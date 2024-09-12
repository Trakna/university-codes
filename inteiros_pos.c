#include <stdio.h>

int main (){

    unsigned int a, b ,c, valor_a, valor_b, valor_c;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    valor_a = a;
    printf("Digite o valor de B: \n");
    scanf("%d", &b);
    valor_b = b;
    printf("Digite o valor de C: \n");
    scanf("%d", &c);
    valor_c = c;
    if (valor_a > valor_b && valor_a > valor_c && valor_b > valor_c){
        printf("O valor decrescente e : %d %d %d \n", valor_a, valor_b, valor_c);
    }
    else if(valor_a > valor_b && valor_a > valor_c && valor_b < valor_c){
        printf("O valor decrescente e : %d %d %d \n", valor_a, valor_c, valor_b);
    }
    else if(valor_a < valor_b && valor_b > valor_c && valor_a > valor_c){
        printf("O valor decrescente e : %d %d %d \n", valor_b, valor_a, valor_c);
    }
    else if(valor_a < valor_b && valor_b > valor_c && valor_a < valor_c){
        printf("O valor decrescente e : %d %d %d \n", valor_b, valor_c, valor_a);
    }
    else if(valor_a < valor_b && valor_b < valor_c && valor_a < valor_c){
        printf("O valor decrescente e : %d %d %d \n", valor_c, valor_b, valor_a);
    }
    else if(valor_a > valor_b && valor_b < valor_c && valor_a < valor_c){
        printf("O valor decrescente e : %d %d %d \n", valor_c, valor_a, valor_b);
    }
return 0;
}