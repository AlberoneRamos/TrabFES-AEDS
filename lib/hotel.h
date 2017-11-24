#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <ctime>
using std::time;

// estrutura que guarda as informações dos quartos.
typedef struct {

    int id;     // ID do quarto;
    string cpf;
    int camas;
    int valor;

} HOTEL;

HOTEL quarto[180][6][7]; // pois o que não é um hotel se não um vetor de quartos uhauhauha
