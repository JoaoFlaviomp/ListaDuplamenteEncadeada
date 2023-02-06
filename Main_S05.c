#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "BBT_S05.c"

int main(){
    int escolha;
    NO *ptrlista;
    NO *elem;
    inicializar(&ptrlista);

    do{
        Menu();
        printf("Escolha uma opcao valida: \n");
        scanf("%d", &escolha);
        fflush(stdin);
        system("cls");
        switch(escolha){
            case 1:
            inserir_fim(&ptrlista);
            break;

            case 2:
            remover_fim(&ptrlista);
            break;

            case 3:
            printf("Exibindo elementos na forma inversa: \n");
            ordem_inversa(&ptrlista);
            break;

            case 4:
            printf("Exibindo a soma dos elementos: \n");
            exibe_soma(&ptrlista);
            break;

            case 5:
            printf("Exibindo a lista: \n");
            imprime_lista(ptrlista);
            break;

            default:
            printf("Opcao invalida.\n");
            break;
        }
    }while(escolha != 6);

    return 0;
}
