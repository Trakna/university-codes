#include <stdio.h>

int main()
{
    unsigned long x = 3;
    int y = 0;
    printf("Valor de alguma sequencia: %d \n", x);
    while (y != 29)
    {
        x = x * 3;
        y = y + 1;

        printf("Continuação:%u\n", x);
    }
    

}