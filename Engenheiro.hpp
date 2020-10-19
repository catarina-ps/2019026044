#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
private:
    string nome;
    int projetos;
public:
    Engenheiro();
    Engenheiro(string,int,double,double);
    string getNome();
    int getProjetos();
    void setNome(string);
    void setProjetos(int);
};

#endif