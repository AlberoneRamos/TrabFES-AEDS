// Função que inicializa as variáveis.
void init(){
    // Preeche os dados dos quartos.
    for (int d = 0; d < 180; d++){
        for (int a = 0; a < 6; a++){
            for (int q = 0; q < 7; q++){
                quarto[d][a][q].id = ((a + 1) * 100) + (q + 1);
                quarto[d][a][q].cpf = "";
                // Preenche o número de camas.
                switch (quarto[d][a][q].id){
                    case 101 : quarto[d][a][q].camas = 1; break;
                    case 102 : quarto[d][a][q].camas = 2; break;
                    case 103 : quarto[d][a][q].camas = 3; break;
                    case 104 : quarto[d][a][q].camas = 3; break;
                    case 105 : quarto[d][a][q].camas = 1; break;
                    case 106 : quarto[d][a][q].camas = 2; break;
                    case 107 : quarto[d][a][q].camas = 3; break;
                    case 201 : quarto[d][a][q].camas = 2; break;
                    case 202 : quarto[d][a][q].camas = 3; break;
                    case 203 : quarto[d][a][q].camas = 1; break;
                    case 204 : quarto[d][a][q].camas = 1; break;
                    case 205 : quarto[d][a][q].camas = 2; break;
                    case 206 : quarto[d][a][q].camas = 3; break;
                    case 207 : quarto[d][a][q].camas = 1; break;
                    case 301 : quarto[d][a][q].camas = 3; break;
                    case 302 : quarto[d][a][q].camas = 1; break;
                    case 303 : quarto[d][a][q].camas = 2; break;
                    case 304 : quarto[d][a][q].camas = 2; break;
                    case 305 : quarto[d][a][q].camas = 1; break;
                    case 306 : quarto[d][a][q].camas = 2; break;
                    case 307 : quarto[d][a][q].camas = 3; break;
                    case 401 : quarto[d][a][q].camas = 2; break;
                    case 402 : quarto[d][a][q].camas = 3; break;
                    case 403 : quarto[d][a][q].camas = 1; break;
                    case 404 : quarto[d][a][q].camas = 1; break;
                    case 405 : quarto[d][a][q].camas = 2; break;
                    case 406 : quarto[d][a][q].camas = 3; break;
                    case 407 : quarto[d][a][q].camas = 1; break;
                    case 501 : quarto[d][a][q].camas = 3; break;
                    case 502 : quarto[d][a][q].camas = 1; break;
                    case 503 : quarto[d][a][q].camas = 2; break;
                    case 504 : quarto[d][a][q].camas = 2; break;
                    case 505 : quarto[d][a][q].camas = 1; break;
                    case 506 : quarto[d][a][q].camas = 2; break;
                    case 507 : quarto[d][a][q].camas = 3; break;
                    case 601 : quarto[d][a][q].camas = 1; break;
                    case 602 : quarto[d][a][q].camas = 2; break;
                    case 603 : quarto[d][a][q].camas = 3; break;
                    case 604 : quarto[d][a][q].camas = 3; break;
                    case 605 : quarto[d][a][q].camas = 1; break;
                    case 606 : quarto[d][a][q].camas = 2; break;
                    case 607 : quarto[d][a][q].camas = 3; break;
                    default  : cout << "ERRO!: ID do quarto não encontrada." << endl; break;
                }
                // Define o valor do quarto baseado no número de camas.
                switch (quarto[d][a][q].camas){
                    case 1  : quarto[d][a][q].valor = 117; break;
                    case 2  : quarto[d][a][q].valor = 150; break;
                    case 3  : quarto[d][a][q].valor = 180; break;
                    default : cout << "ERRO!: Número de camas inexperado." << endl; break;
                }
            }// for andares
        }// for quartos
    }// dias

}

