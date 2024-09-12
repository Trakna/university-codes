#include <stdio.h>

int main(){
    float nota1 = 0, nota2 = 0, nota3 = 0, media_alunos, media_total;
    int codigo = 1, cont = 0;
    
    while (codigo != 0){
    printf("Digite o codigo : \n");
    scanf("%d", &codigo);

        if (codigo > 0){
            printf("Digite as  3 notas: \n");
            scanf("%f%f%f", &nota1, &nota2, &nota3);

            if (nota1 >= 0 && nota1 <=10 && nota2 >= 0 && nota2 <= 10 && nota3 >=0 && nota3 <= 10){
                media_alunos = (nota1 + nota2 + nota3) / 3;
                media_total = media_total + media_alunos;
                cont++;
                printf("A media do aluno %d e de: %.2f\n", codigo, media_alunos);
            }
            else{
                printf("Nota invalida\n");
            }
        }
    }
    if (cont > 0){
    printf("A media total e de : %.2f\n", media_total/cont);
    }
    else{
        printf("nenhuma media foi calculada. \n");
    }
    return 0;
}
