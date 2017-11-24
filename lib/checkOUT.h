void checkOUT(){
    cout << endl;
    cout << " * --- FAZER CHECK-OUT ---* ";
    cout << endl << endl;
    cout << " Insira o dia: ";
    int dia = 0;
    cin >> dia;
    if (dia < 0 || dia > 179){
        cout << "Data de entrada excede o limite (0-179). " << endl;
        return;
    }

    cout << endl;
    cout << " Informe o quarto a ser liberado: ";
    int id_quarto = 0;
    cin >> id_quarto;

    int a = (id_quarto / 100) - 1;
    int q = (((id_quarto) % 100) % 10) - 1;

    if (quarto[dia][a][q].id != id_quarto){
            cout << " Quarto nao existe." << endl;
        }else {
            //Agora determina se o quarto já está alocado.
            if (quarto[dia][a - 1][q - 1].cpf == "" ){
                cout << " Quarto esta vazio." << endl;
                return;
            }else {
                quarto[dia][a - 1][q - 1].cpf = "";
                cout << " check-out feito com sucesso." << endl;
            }
        }
}

