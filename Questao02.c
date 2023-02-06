#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sNo
{   
    char canais;
    int numero_canal;
    struct sNo *dir;
    struct sNo *esq;
}NO;
    // A partir dessa estrutura de dados, conhecida como lista duplamente encadeada, permite armazenar o nome e o numero do canal.
    // Alem de ser possivel fazer a troca de canais em ambas as direcoes.