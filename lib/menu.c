#include "menu.h"

void imprimeMenu(){
    system("cls");
    printf("\n\n\n\n\n\t\t\t  Menu\n");
    printf("\n\t\t\t  1. Incluir reserva\n");
    printf("\t\t\t  2. Excluir reserva\n");
    printf("\t\t\t  3. Imprimir reserva \n");
    printf("\t\t\t  4. Sair \n");
    printf("\t\t\t  Opção:   ");

}

void menu(){
int op,x=0;
    system("cls");
    while(op!=4){
        imprimeMenu();
        scanf("%i",&op);
        if(op<1 || op>9 ){
            printf("Opção errada, badernista..");
            getch();
            op==20;
            x++;
        }
        switch(op){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        }
    }
}
