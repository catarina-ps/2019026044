#include "Empregado.hpp"

Empregado::Empregado(){
    nome = "";
    quotaMensalVendas = 0;
    salarioHora = 0;
}
Empregado::Empregado(string Nome,double quota,double salario){
    nome = Nome;
    quotaMensalVendas = quota;
    salarioHora = salario;
}
double Empregado::pagamentoMes(double horasTrabalhadas){
    double t = horasTrabalhadas;
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8)
    {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
    return t * salarioHora;
}
double Empregado::getSalarioHora(){
    return salarioHora;
}
double Empregado::getQuotaMensal(){
    return quotaMensalVendas;
}
string Empregado::getNome(){
    return nome;
}
void Empregado::setNome(string Nome){
    nome = Nome;
}
void Empregado::setSalarioHora(double Salario){
    salarioHora = Salario;
}
void Empregado::setQuotaMensal(double Quota){ 
    quotaMensalVendas = Quota;
}