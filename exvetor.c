#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "");
    int v1[5], v2[5], v3[10], i , j;
    j = 0;
    for(i = 0; i<=4; i++){
        printf("\n Vetor 1 - numero na posicao [%d]:", i);
        scanf("%d", &v1[i]);
        v3[j] = v1[i];
        j++;
        printf("\nVetor 2 - numero na posicao [%d]", i);
        scanf("%d", &v2[i]);
        v3[j] = v2[i];
        j++;
    }
    printf("\n Vetor intercalado:\n");
    for (j = 0; j<=9; j++){
        printf("%d\t", v3[j]);
    }
    printf("\n");



}
