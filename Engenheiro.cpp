#include "Engenheiro.hpp"

Engenheiro::Engenheiro() : Empregado(){
  projetos = 0;
}
Engenheiro::Engenheiro(string Nome, int Projetos,double Quota,double Salario) : Empregado(Nome,Quota,Salario){
  projetos = Projetos;
}

int Engenheiro::getProjetos(){
  return projetos;
}
void Engenheiro::setProjetos(int Projetos){
  projetos = Projetos;
}
