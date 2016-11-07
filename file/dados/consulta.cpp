#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string nome_arquivo = "estados.csv";
    string uf;
    cout << "Informe a sigla: ";
    getline(cin, uf);
    fstream arq;
    arq.open(nome_arquivo.c_str(), ios::in);
    while (arq.good()){
        string linha;
        getline(arq, linha);

        string p1 = linha.substr(0,2);
        
        if (uf.compare(p1) == 0){
            cout << linha.substr(3) << endl;
            break;
        }
    }
    arq.close();
}
