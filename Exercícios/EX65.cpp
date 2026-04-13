int ListaEncad :: getComprimento (){
    No *p = new No();
    p = primeiro;
    int cont = 0;

    while(p->getProx() != NULL){
        cont++;
        p->setProx();
    }
    return cont;
}