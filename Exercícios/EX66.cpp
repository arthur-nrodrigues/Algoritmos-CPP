int ListaEncad::contaMaiores (int val ){
    No *p = new No();
    int cont = 0;

    for(p = primeiro; p->getProx() != NULL; p = p->setProx()){
        if(p->getInfo() > val){
            cont++;
        }

    }
    return cont;

}