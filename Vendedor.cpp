#include "Vendedor.hpp"

Vendedor::Vendedor()
{
	setNome("");
	setQuotaMensal(0.0);
	setSalarioHora(0.0);
}
Vendedor::Vendedor(string Nome, double Quota, double Salario)
{
	setNome(Nome);
	setQuotaMensal(Quota);
	setSalarioHora(Salario);
}
double Vendedor::quotaTotalAnual()
{
	return getQuotaMensal() * 12;
}