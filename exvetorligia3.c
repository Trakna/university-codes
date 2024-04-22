#include <stdio.h>

void main(){
    int v[8], aux, i, j;
    
    for (i = 0; i <= 4; i++){
        printf("Digite o elemento da [%d] posicao", i);
        scanf("%d", &v[i]);
    }
    for(i = 0; i <= 3; i++){
        for(j = i +1; j <= 4; j++){
            if (v[i]> v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux; 
            }
        }
    }

    printf("\n Vetor ordenado de forma crescente\n");
    for(i = 0; i<= 4; i++){
        printf("%d\t", v[i]);
    }
    printf("\n");
}