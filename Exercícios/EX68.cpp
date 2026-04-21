bool ListaEncad::igual (ListaEncad *l2){
    if(l2 == NULL){
        return false;
    }
    No *p1 = primeiro;
    No *p2 = l2->primeiro;
    while(p1 != NULL && p2 != NULL){
        if(p1->getInfo() != p2->getInfo()){
            return false;
        }
        p1 = p1->getProx();
        p2 = p2->getProx();
    }
    if(p1 == NULL && p2 == NULL){
        return true;
    }else{
        return false;
    }
}