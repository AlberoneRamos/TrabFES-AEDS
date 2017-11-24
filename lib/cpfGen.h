string cpfGen(){
    long long int cpf;
    srand(time(NULL));
    cpf = rand() % 99999999999;

    string CPF = std::to_string(cpf);
    return CPF;
}
