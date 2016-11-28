#include "split.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    int cep;
    string linha;
    bool encontrei = false;
    cout << "Informe o CEP:";
    cin >> cep;
    fstream cidades;
    cidades.open("cidades.csv", ios::in);
    while (cidades.good()){
        getline(cidades, linha);
        if (linha.size()==0)
            continue;
        vector<string> campos = split(linha, ';');
        int cep_inicial = atoi(campos[1].c_str());
        int cep_final = atoi(campos[2].c_str());
        if (cep >= cep_inicial && cep <= cep_final){
            cout << campos[0] << "-" << campos[3] << endl;
            encontrei = true;
            break;
        }
    }
    cidades.close();
    if (!encontrei){
        cout << "Não encontrei nenhuma cidade com esse cep." << endl;
    }
    return 0;
}
