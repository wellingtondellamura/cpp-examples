#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  fstream arquivo;
  string linha;
  string nomearquivo;
  cout << "Informe o nome do arquivo: ";
  getline(cin, nomearquivo);
  arquivo.open(nomearquivo.c_str(), ios::in);
  while (arquivo.good()) {
    getline(arquivo, linha);
    cout << linha << endl;
  };
  arquivo.close();
  return 0;
}
