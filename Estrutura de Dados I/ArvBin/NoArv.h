#ifndef NOARV_H_INCLUDED
#define NOARV_H_INCLUDED

class NoArv
{
  private:
    int info;   // informacao do no
    NoArv *esq; // ponteiro para no filho a esquerda
    NoArv *dir; // ponteiro para no filho a direita
  public:
    NoArv()               { };
    ~NoArv()              { };
    int getInfo()         { return info; };
    NoArv* getEsq()       { return esq; };
    NoArv* getDir()       { return dir; };
    void setInfo(int val) { info = val; };
    void setEsq(NoArv *p) { esq = p; };
    void setDir(NoArv *p) { dir = p; };
};

#endif // NOARV_H_INCLUDED
