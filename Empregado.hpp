#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;
class Empregado{
private:
  double salarioHora;
  double quotaMensalVendas;
public:
  double pagamentoMes(double);
  double getSalarioHora();
  double getQuotaMensal();
  void setSalarioHora(double);
  void setQuotaMensal(double);
};

#endif