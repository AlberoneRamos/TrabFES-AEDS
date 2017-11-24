void checkIN(){
    cout << endl;
    cout << " * --- FAZER CHECK-IN ---* ";
    cout << endl << endl;
    cout << "Informe o numero de camas desejadas (1-3): ";
    int numero = 0;
    cin >> numero;
    if (numero > 3 || numero < 1){
        cout << "Numero de camas invalido. " << endl;
        return;
    }

    cout << "Informe a data: ";
    int entrada = 0;
    cin >> entrada;
    if (entrada < 0 || entrada > 179){
        cout << "Data de entrada excede o limite (0-179). " << endl;
        return;
    }

    string disponibilidade = "";


    for (int a = 0; a < 6; a++){
        for (int q = 0; q < 7; q++){
            if ((quarto[entrada][a][q].camas == numero) &&
                (quarto[entrada][a][q].cpf == "")
                ){
                    disponibilidade += std::to_string(quarto[entrada][a][q].id);
                    disponibilidade += " ";
                }
        }// for andares
    }


    if (disponibilidade == ""){
        cout << "Nenhum quarto disponivel dentro do criterio. " << endl;
        return;
    }else{
        cout << " Quartos disponiveis: " << disponibilidade << endl;
        cout << " Valor da diaria: ";
        switch (numero){
            case 1 : cout << " R$ 117,00" << endl; break;
            case 2 : cout << " R$ 150,00" << endl; break;
            case 3 : cout << " R$ 180,00" << endl; break;
            default : cout << "ERRO!:" << endl; break;
        }

        // Validação do quarto
        cout << endl;
        cout << " Insira o quarto desejado: ";
        int id_quarto = 0;
        cin >> id_quarto;
        cout << " Insira o o CPF: ";
        string cpf = "";
        cin >> cpf;

        int a = (id_quarto / 100) - 1;
        int q = (((id_quarto) % 100) % 10) - 1;

        if (quarto[entrada][a][q].id != id_quarto){
            cout << " Quarto nao existe." << endl;
        }else {
            book(a, q, entrada, 1, cpf);
            cout << " CPF: " << quarto[entrada][a - 1][q - 1].cpf << " registrado no quarto " << quarto[entrada][a][q].id << endl;
        }
    }
}
