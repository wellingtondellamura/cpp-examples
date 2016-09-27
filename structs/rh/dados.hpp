#ifndef DADOS_HPP_
#define DADOS_HPP_

#include <string>

using namespace std;

struct Setor{
    string descricao;
    double adicional;
};

struct Funcionario{
    int registro;
    string nome;
    double salario;
    Setor setor;
};
#endif /* DADOS_HPP_ */
