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
  arquivo.open(nomearquivo.c_str(), ios::out | ios::app);
  do {
    getline(cin, linha);
    arquivo << linha << endl;
  } while (linha.size() > 0);
  arquivo.close();
  return 0;
}
