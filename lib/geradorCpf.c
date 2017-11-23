#include "geradorCpf.h"

char *getCpf(){
    int randomNumber, i;
    char *CPF = malloc(11);
    for( i=0; i < 11 ; i++ ){
        CPF[i] = ((rand() % 9) + 0) + '0';
    }
    return CPF;
}
