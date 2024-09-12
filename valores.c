#include <stdio.h>

int main (){

    float a, b ,c, valor_a, valor_b, valor_c;
    short int i;

    printf("Digite o valor de i (1, 2 ou 3): \n");
    scanf("%hd", &i);
    printf("Digite o valor de A:\n");
    scanf("%f", &a);
    valor_a = a;
    printf("Digite o valor de B: \n");
    scanf("%f", &b);
    valor_b = b;
    printf("Digite o valor de C: \n");
    scanf("%f", &c);
    valor_c = c;
    if (i == 1 && valor_a > valor_b && valor_a > valor_c && valor_b > valor_c){
        printf("O valor crescente e : %.2f %.2f %.2f \n", valor_c, valor_b, valor_a);
    }
    else if(i == 1 && valor_a > valor_b && valor_a > valor_c && valor_b < valor_c){
        printf("O valor crescente e : %.2f %.2f %.2f \n", valor_b, valor_c, valor_a);
    }
    else if(i == 1 && valor_a < valor_b && valor_b > valor_c && valor_a > valor_c){
        printf("O valor crescente e : %.2f %.2f %.2f \n", valor_c, valor_a, valor_b);
    }
    else if(i == 1 && valor_a < valor_b && valor_b > valor_c && valor_a < valor_c){
        printf("O valor crescente e : %.2f %.2f %.2f \n", valor_a, valor_c, valor_b);
    }
    else if(i == 1 && valor_a < valor_b && valor_b < valor_c && valor_a < valor_c){
        printf("O valor crescente e : %.2f %.2f %.2f \n", valor_a, valor_b, valor_c);
    }
    else if((i == 1) && valor_a > valor_b && valor_b < valor_c && valor_a < valor_c){
        printf("O valor crescente e : %.2f %.2f %.2f \n", valor_b, valor_a, valor_c);
    }
    else if ((i == 2) && valor_a > valor_b && valor_a > valor_c && valor_b > valor_c){
        printf("O valor decrescente e : %.2f %.2f %.2f \n", valor_a, valor_b, valor_c);
    }
    else if((i == 2) && valor_a > valor_b && valor_a > valor_c && valor_b < valor_c){
        printf("O valor decrescente e : %.2f %.2f %.2f \n", valor_a, valor_c, valor_b);
    }
    else if((i == 2) && valor_a < valor_b && valor_b > valor_c && valor_a > valor_c){
        printf("O valor decrescente e : %.2f %.2f %.2f \n", valor_b, valor_a, valor_c);
    }
    else if((i == 2) && valor_a < valor_b && valor_b > valor_c && valor_a < valor_c){
        printf("O valor decrescente e : %.2f %.2f %.2f \n", valor_b, valor_c, valor_a);
    }
    else if((i == 2) && valor_a < valor_b && valor_b < valor_c && valor_a < valor_c){
        printf("O valor decrescente e : %.2f %.2f %.2f \n", valor_c, valor_b, valor_a);
    }
    else if((i == 2) && valor_a > valor_b && valor_b < valor_c && valor_a < valor_c){
        printf("O valor decrescente e : %.2f %.2f %.2f \n", valor_c, valor_a, valor_b);
    }
    else if (i == 3 && valor_a > valor_b && valor_a > valor_c && valor_b > valor_c) {
        printf("O maior valor esta ao centro : %.2f %.2f %.2f \n", valor_b, valor_a, valor_c);
    } 
    else if (i == 3 && valor_b > valor_a && valor_b > valor_c && valor_a > valor_c) {
        printf("O maior valor esta ao centro : %.2f %.2f %.2f \n", valor_a, valor_b, valor_c);
    }
    else if (i == 3 && valor_c > valor_a && valor_c > valor_b && valor_a > valor_b) {
        printf("O maior valor esta ao centro : %.2f %.2f %.2f \n", valor_b, valor_c, valor_a);
    } 
    else if (i == 3 && valor_a > valor_b && valor_a > valor_c && valor_b < valor_c) {
        printf("O maior valor esta ao centro : %.2f %.2f %.2f \n", valor_c, valor_a, valor_b);
    } 
    else if (i == 3 && valor_b > valor_a && valor_b > valor_c && valor_a < valor_c) {
        printf("O maior valor esta ao centro : %.2f %.2f %.2f \n", valor_c, valor_b, valor_a);
    } 
    else if (i == 3 && valor_a < valor_b && valor_c > valor_a && valor_c > valor_b) {
        printf("O maior valor esta ao centro : %.2f %.2f %.2f \n", valor_a, valor_c, valor_b);
    }
    return 0;
}
