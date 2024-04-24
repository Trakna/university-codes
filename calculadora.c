#include <stdio.h>
#include <stdlib.h>

void soma(){
    float valor1, valor2, result;
    printf("\n Type value one : ");
    scanf("%f", &valor1);
    printf("\nType value two : ");
    scanf("%f", &valor2);
    result = valor1 + valor2;
    printf("The result is :%.2f", result);
    system("clear");//basicamente um "clear" limpa a tela.
    menu();
}
void subtrai(){
    float valor1, valor2, result;
    printf("\n Type value one: ");
    scanf("%f", &valor1);
    printf("\n Type value two:");
    scanf("%f", &valor2);
    result = valor1 - valor2;
    printf("\n The result is : %.2f", result);
    system("clear");
    menu();
}
void multiplica(){
    float valor1, valor2, result;
    printf("\nType value one: ");
    scanf("%f", &valor1);
    printf("\n Type value two: ");
    scanf("%f", &valor2);
    result = valor1 * valor2;
    printf("The result is : %.2f", result);
    system("clear");
    menu();
}
void divide(){
    float valor1, valor2, result;
    printf("\n Type value one: ");
    scanf("%f", &valor1);
    printf("\nType value two: ");
    scanf("%f", &valor2);
    result = valor1 / valor2;
    printf("\n The result is :%.2f", result);
    system("clear");
    menu();
}
void menu(){
    int escolha;

    printf("\t Welcome to Calculator in C\n\n");

    printf("Select an math operator: \n");
    printf("\t1-Adicao(+)\n");
    printf("\t2-Subtracao(-)\n");
    printf("\t3-Multiplicacao(*)\n");
    printf("\t4-Divisao(/)\n");
    printf("\t5-Sair(exit)");
    printf("\nOperation :");
    scanf("%d", &escolha);
    
    switch(escolha){
        case 1:
            soma();
        break;
        case 2:
            subtrai();
        break;
        case 3:
            multiplica();
        break;
        case 4:
            divide();
            break;
        case 5:
            system("exit");
            printf("\n Exiting...");
        break;
        default:
            printf("\n Invalid comand, retry!\n\n");
            system("clear");
            menu();
            break;
    }
}
int main(){
    menu();
    return 0;

}




