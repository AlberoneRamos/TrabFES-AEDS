#include <string.h>

// Pede o endereço de um struct do tipo TIPO_RESERVA, uma string cpf e uma string data
void checkIn(quartos* quarto, char *cpf);

#endif
// CHECKING_H_INCLUDED

/* descomente para testar a função

#include <iostream>

TIPO_RESERVA reserva[181][6][7];

TIPO_RESERVA* p = &reserva[0][0][0];

int main()
{
    checkIn(p, "11076685650", "2017-11-23");

    std::cout << "CPF:" << reserva[0][0][0].CPF << std::endl;
    std::cout << "Data:" << reserva[0][0][0].data << std::endl;
}

*/
