#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED

class No
{
  public:

    No();
    ~No();
    int getInfo();
    No* getProx();
    void setInfo(int val);
    void setProx();

  private:
    int info;
    No *prox;
};

#endif // NO_H_INCLUDED
