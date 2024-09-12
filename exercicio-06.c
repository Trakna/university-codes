#include <stdio.h>

int main(){
    int numero = 0, resultado = 0;
    for (numero = 1000; numero <= 1999; numero++)
    {
        if (numero % 11 == 5)
        {
            resultado = numero % 11;
            printf("O numero  e: %d / 11 = %d\n",  numero, resultado);        
        }
    }
    return 0;
}