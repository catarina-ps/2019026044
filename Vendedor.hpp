#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"

class Vendedor : public Empregado
{
private:
public:
    Vendedor();
    Vendedor(string, double, double);
    double quotaTotalAnual();
};

#endif