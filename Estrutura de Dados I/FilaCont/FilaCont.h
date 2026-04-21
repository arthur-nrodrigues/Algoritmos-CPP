#ifndef FILACONT_H_INCLUDED
#define FILACONT_H_INCLUDED

class FilaCont
{
  public:
    FilaCont(int tam);
    ~FilaCont();
    int getInicio();
    void enfileira(int val); // insere no final
    int desenfileira(); // remove primeiro
    bool vazia();
    void imprime(); // SOMENTE PARA TESTES

  private:
    int max; // capacidade maxima de elementos
    int inicio; // posicao do primeiro no
    int fim; // posicao do ultimo no
    int *vet; // vetor que armazena a lista
};

#endif // FILACONT_H_INCLUDED
