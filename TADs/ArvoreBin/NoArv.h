#ifndef NOARV_H_INCLUDED
#define NOARV_H_INCLUDED

class NoArv
{
    private:
        NoArv *esq; // ponteiro para o filho `a esquerda
        int info; // informa ̧c~ao (valor) do n ́o (int)
        NoArv *dir; // ponteiro para o filho `a direita
    public:
        NoArv() { };
        ~NoArv() { };
        void setEsq(NoArv *p) { esq = p; };
        void setInfo(int val) { info = val; };
        void setDir(NoArv *p) { dir = p; };
        NoArv* getEsq() { return esq; };
        int getInfo() { return info; };
        NoArv* getDir() { return dir; };
};


#endif // NOARV_H_INCLUDED
