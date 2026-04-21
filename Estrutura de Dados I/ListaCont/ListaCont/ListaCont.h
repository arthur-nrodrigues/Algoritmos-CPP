#ifndef LISTACONT_H_INCLUDED
#define LISTACONT_H_INCLUDED

class ListaCont
{
  public:
    ListaCont(int tam);
    ~ListaCont();
    int get(int k);
    void set(int k, int val);
    void insereFinal(int val); // insere no final
    void removeFinal(); // remove ultimo
    void insereInicio(int val);  // insere no inicio
    void removeInicio(); // remove primeiro
    void insereInicio2(int val);  // insere k=0
    void removeInicio2(); // remove k=0
    void insereK(int k, int val); // antes de xk
    void removeK(int k); // remove xk
    void imprime();
    int numNos();
    int buscaMaior(int val);
    void limpar();
    void concatena(ListaCont *l2);
    ListaCont* concatenaNova(ListaCont *l2);

  private:
    int max; // capacidade maxima de elementos
    int n; // quantidade de nos da lista
    int *vet; // vetor que armazena a lista
    void aumentaCapacidade();
    void aumentaCapacidade(int novoMax);
};

#endif // LISTACONT_H_INCLUDED
