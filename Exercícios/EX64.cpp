bool ListaCont :: aumentaCapacidade (int novoMax ){

    if(novoMax < max){
        return false;
    }else{
        int *temp = new int[novoMax];
        for(int i=0;i<n;i++){
            temp[i] = vet[i];
        }
        delete []vet;
        vet = temp;
        return true;
    }
}