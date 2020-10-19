#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas)
{
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
void Empregado::setSalarioHora(double Salario){
    salarioHora = Salario;
}
void Empregado::setQuotaMensal(double Quota){ 
    quotaMensalVendas = Quota;
}