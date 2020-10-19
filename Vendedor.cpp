#include "Vendedor.hpp"

Vendedor::Vendedor() : Empregado()
{
}
Vendedor::Vendedor(string Nome, double Quota, double Salario) : Empregado(Nome, Quota, Salario)
{
}
double Vendedor::quotaTotalAnual()
{
	return getQuotaMensal() * 12;
}