#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main()
{

  Engenheiro eng1("Joao Snow", 3, 0.0, 35);
  std::cout << "Nome: " << eng1.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.getProjetos() << std::endl;
  std::cout << std::endl;

  Engenheiro eng2("Daniela Targaryen", 1, 0.0, 30);
  std::cout << "Nome: " << eng2.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.getProjetos() << std::endl;
  std::cout << std::endl;

  Engenheiro eng3("Bruno Stark", 2, 0.0, 30);
  std::cout << "Nome: " << eng3.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.getProjetos() << std::endl;
  std::cout << std::endl;

  Vendedor vend1("Tonho Lannister",5000,20);
  std::cout << "Nome: " << vend1.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend2("Jose Mormont",3000,25);
  std::cout << "Nome: " << vend2.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend3("Sonia Stark",4000,30);
  std::cout << "Nome: " << vend3.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;

  return 0;
}