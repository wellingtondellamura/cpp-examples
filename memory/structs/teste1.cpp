#include <iostream>

using namespace std;

struct Produto{
  int codigo;
  string descricao;
  double valor;
};

int main(){
  Produto p[10];
  p[0].codigo = 11;
  p[0].descricao = "Macarrão";
  p[0].valor = 10.99;
  cout << p[0].valor << endl;
}
