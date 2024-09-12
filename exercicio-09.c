#include <stdio.h>

int main(){

    int contagem = 100, impar = 0;
    for (contagem = 100; contagem <= 200; contagem++)
    {
        if (contagem % 2 == 1)
        {
            impar = contagem;
            printf("O numero %d e impar\n", impar);
        }
    }


}