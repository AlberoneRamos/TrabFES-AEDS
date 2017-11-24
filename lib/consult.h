
void consult(){
    cout << endl;
    cout << " * --- CONSULTAR QUARTO ---* ";
    cout << endl << endl;
    cout << "Insira o dia: ";
    int dia = 0;
    cin >> dia;
    if (dia < 0 || dia > 179){
        cout << "Data de entrada excede o limite (0-179). " << endl;
        return;
    }
    cout << "Insira o numero do quarto: ";
    int id_quarto = 0;
    cin >> id_quarto;

    int a = (id_quarto / 100) - 1;
        int q = (((id_quarto) % 100) % 10) - 1;

        if (quarto[dia][a][q].id != id_quarto){
            cout << " Quarto nao existe." << endl;
        }else {
            //Quarto existe, agora testa se está vazio.
            if (quarto[dia][a - 1][q - 1].cpf == ""){
                cout << " Quarto "<< quarto[dia][a][q].id << " esta vazio nessa data." << endl;
            }else{
                cout << " Quarto "<< quarto[dia][a][q].id << " locado por " << quarto[dia][a - 1][q - 1].cpf << endl;
            }
            //out << " Quarto " << quarto[dia][a][q].id << " existe." << endl;
            //book(a, q, dia, 0, cpfGen());
        }




}
