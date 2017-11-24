// Método usado para reservar um quarto, por um determinado ńúmero de dias.
void book(int a, int q, int entrada, int dias, string cpf){
    int tempo = entrada + dias;
    while (entrada < tempo){
        quarto[entrada][a - 1][q - 1].cpf = cpf;
        //cout << quarto[entrada][a][q].cpf << endl;
        entrada++;
    }
}

