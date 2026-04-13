bool ListaCont::troca(int posicao1,int posicao2){
    if((posicao1 >= 0 and posicao1 < n) and (posicao2 >= 0 and posicao2 < n)){ //Verifica se as duas posicoes são validas;
        vet[posicao1] = vet[posicao2];
        vet[posicao2] = vet[posicao1];
        return true;
    }else{
        return false;
    }
}