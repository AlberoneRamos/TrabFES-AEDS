#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

void CPFGen()
{
    // Vari�veis.
    int cpf[10];
    int dv11, dv2, fator, total = 0;

    // Randomiza a fun��o rand.
    srand(time(NULL));

    // Povoa os 9 primeiros d�gitos do CPF.
    for (int i = 0; i <= 8; i++){
        cpf[i] = rand() % 9;
    }

    // Calcula o d�gito verificador.
    fator = 10;

    for (int i = 0; i <= 8; i++){
        total += (cpf[i] * fator);
        fator--;
    }
    if ((total % 11) < 2){
        dv11 = 0;
    }else{
        dv11 = 11 - (total % 11);
    }

    // Calcula o segundo d�gito verificador.
    fator = 11;
    total = 0;

    for (int i = 0; i <= 8; i++){
        total += (cpf[i] * fator);
        fator--;
    }

    total += dv11 * fator;

    if ((total % 11) < 2){
        dv2 = 0;
    }else{
        dv2 = 11 - (total % 11);
    }

    // Sa�da.
    cout << cpf[0] << cpf[1] << cpf[2] << cpf[3] << cpf[4] << cpf[5] << cpf[6] << cpf[7] << cpf[8] << dv11 << dv2 << endl;

}
