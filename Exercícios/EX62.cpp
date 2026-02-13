Jogador::Jogador(string nome){
    nomeJogador = nome;
    golsMarcados = 0;
}

string Jogador::getNome(){
    cout << "Nome do jogador: " << nomeJogador << endl;
}

int Jogador::getGols(){
    cout << "gols do jogador " << nomeJogador << ": " << golsMarcados << endl;
}

void Jogador::setGols(int val){
    golsMarcados = val;
}
