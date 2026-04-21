void ListaEncad::insereOrdenado (int val ){
    No *p = primeiro;
    No *novo = new No();
    novo->setInfo(val);

    if(primeiro == NULL || val <= primeiro->getInfo()){ //Lista vazia.
        novo->setProx(primeiro);
        primeiro  = novo;
        exit(1);
    }
    while(p->getProx() != NULL && p->getProx()->getInfo() < val){
        p = p->getProx();
    }

    novo->setProx(p->getProx());
    p->setProx(novo);
}