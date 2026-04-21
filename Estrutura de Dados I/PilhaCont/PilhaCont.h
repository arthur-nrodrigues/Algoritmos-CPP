#ifndef PILHACONT_H_INCLUDED
#define PILHACONT_H_INCLUDED

class PilhaCont
{
  public:
    PilhaCont(int tam);
    ~PilhaCont();
    int getTopo();
    void empilha(int val); // insere no final
    int desempilha(); // remove ultimo
    bool vazia();
    void imprime(); // NAO DEVE EXISTIR --- somente para testes
  private:
    int max; // capacidade maxima de elementos
    int topo; // posicao do topo
    int *vet; // vetor que armazena a lista
};

#endif // PILHACONT_H_INCLUDED
