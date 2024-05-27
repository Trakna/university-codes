#include <stdio.h>
void main(){
    int m[3][3], linha, coluna, par=0, impar=0;
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<3; coluna++){
            printf("Elemento[%d][%d]= ", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }
    printf("\n Valors originais da matriz\n");
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<3; coluna++){
            printf("%d\t", m[linha][coluna]);
            if(m[linha][coluna] % 2 ==0){
                par++;
            }
            else{
                impar++;
            }
        }
        printf("\n");
    }
    printf("\n Quantidade de elementos par = %d\n", par);
    printf("\n Quantidade de elementos impar = %d\n", impar);
}

