#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;
class Empregado{
private:
  string nome;
  double salarioHora;
  double quotaMensalVendas;

public:
  Empregado();
  Empregado(string, double, double);
  double pagamentoMes(double);
  double getSalarioHora();
  double getQuotaMensal();
  string getNome();
  void setNome(string);
  void setSalarioHora(double);
  void setQuotaMensal(double);
};

#endif