#include <stdio.h>

void main(){
    int m[2][3],i, j, q;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Digite um numero na posicao[%d][%d]", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    q = 0;
    for(i = 0; i<2; i++){
        for(j = 0; j<2; j++){
            if(m[i][j]>30){
                q++;
            }
        }
    }
    printf("\n Resultado = %d\n",q);


}
