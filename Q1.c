#include <stdio.h>
#include <stdlib.h>

struct Aluno{
        float n1, n2;
        float media;
    };

int main(){
    struct Aluno a;
    struct Aluno *Pa;
    Pa = &a;

    puts("Valor da primeira nota:");
    scanf("%e",&Pa->n1);
    puts("Valor da segunda nota:");
    scanf("%e",&Pa->n2);

    Pa->media = (Pa->n1+Pa->n2)/2; 

    printf("Nota 1: %0.1f\n",Pa->n1);
    printf("Nota 2: %0.1f\n",Pa->n2);
    printf("Média: %0.1f\n",Pa->media);
    return 0;
}


