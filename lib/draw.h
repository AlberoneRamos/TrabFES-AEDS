// Função que desenha a matriz do hotel.
void draw(int dia){
    cout << "Dia " << dia << endl;
    for (int a = 0; a < 6; a++){
        cout << "Andar: " << a + 1 << " ";
        for (int q = 0; q < 7; q++){
            cout << " " << quarto[dia][a][q].id << " ";
        }
        cout << endl;
    }
}
