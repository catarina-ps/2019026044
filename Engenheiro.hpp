#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
private:
    int projetos;
public:
    Engenheiro();
    Engenheiro(string,int,double,double);
    int getProjetos();
    void setProjetos(int);
};

#endif