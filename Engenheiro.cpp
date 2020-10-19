#include "Engenheiro.hpp"

Engenheiro::Engenheiro(){
  nome = "";
  projetos = 0;
}
Engenheiro::Engenheiro(string Nome, int Projetos,double Quota,double Salario) : Empregado(Quota,Salario){
  nome = Nome;
  projetos = Projetos;
}
string Engenheiro::getNome(){
  return nome;
}
int Engenheiro::getProjetos(){
  return projetos;
}
void Engenheiro::setNome(string Nome){
  nome = Nome;
}
void Engenheiro::setProjetos(int Projetos){
  projetos = Projetos;
}
