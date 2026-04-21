#ifndef NODUPLO_H_INCLUDED
#define NODUPLO_H_INCLUDED

class NoDuplo
{
  public:
    NoDuplo() { };
    ~NoDuplo() { };
    NoDuplo* getAnt() { return ant; };
    int getInfo() { return info; };
    NoDuplo* getProx() { return prox; };
    void setAnt(NoDuplo *p) { ant = p; };
    void setInfo(int val) { info = val; };
    void setProx(NoDuplo *p) { prox = p; };

  private:
    NoDuplo *ant;
    int info;
    NoDuplo *prox;
};

#endif // NODUPLO_H_INCLUDED
