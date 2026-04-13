#ifndef LISTACONT_H_INCLUDED
#define LISTACONT_H_INCLUDED

#include <iostream>
using namespace std;

class ListaCont {
    public:
        // Construtor: Aloca o vetor com a capacidade 'tam' [cite: 132, 134]
        ListaCont(int tam);

        // Destrutor: Desaloca a memória do vetor [cite: 135]
        ~ListaCont();

        // Consultar valor na posição k [cite: 42, 116]
        int get(int k);

        // Alterar valor na posição k [cite: 43, 117]
        void set(int k, int val);

        // Inserção no final: O(1) se não estiver cheia [cite: 107, 119, 170]
        void insereFinal(int val);

        // Remoção no final: O(1) [cite: 108, 120, 184]
        void removeFinal();

        // Inserção em posição k: Exige deslocamento para a direita [cite: 121, 195, 197]
        void insereK(int k, int val);

        // Remoção em posição k: Exige deslocamento para a esquerda [cite: 122, 225, 228]
        void removeK(int k);

        void imprime();

    private:
        int max;    // Capacidade máxima de elementos [cite: 124, 127]
        int n;      // Quantidade atual de nós na lista [cite: 125, 127]
        int *vet;   // Ponteiro para o vetor que armazena os dados [cite: 126, 128]
};


#endif // LISTACONT_H_INCLUDED
