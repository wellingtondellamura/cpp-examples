#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int n_arq = 3;
string config = "fortune.cfg";
string arqs[] = {"fortunes","literature","riddles"};
int cont_arqs[] = {0,0,0};

int sortear_numero(int);
void carregar_config(string);
void contar_frases();
string obter_frase(string, int);

int main(){
    carregar_config(config);
    int x = sortear_numero(n_arq);
    int num = sortear_numero(cont_arqs[x]);
    string frase = obter_frase(arqs[x], num);
    cout << frase << endl;
    return 0;
}

int sortear_numero(int max){
    srand(time(NULL));
    return rand() % max;
}

void carregar_config(string config){
    fstream cfg;
    cfg.open(config.c_str(), ios::in);
    if (cfg.fail()){
        contar_frases();
    }else{
        int x = 0;
        while(cfg.good() && x < 3){
            string linha;
            getline(cfg, linha);
            cont_arqs[x] = atoi(linha.c_str());
            x++;
        }
        cfg.close();
    }
}

void contar_frases(){
    for (int i = 0; i<n_arq; i++){
        fstream arq;
        arq.open(arqs[i].c_str(), ios::in);
        if (arq.fail()){
            cont_arqs[i] = 0;
        }else{
            while (arq.good()){
                string linha;
                getline(arq, linha);
                if (linha.size()>0 && linha[0] == '%'){
                    cont_arqs[i]++;
                }
            }
        }
        arq.close();
    }
    fstream cfg;
    cfg.open(config.c_str(), ios::out | ios::trunc);
    cfg << cont_arqs[0] << endl;
    cfg << cont_arqs[1] << endl;
    cfg << cont_arqs[2] << endl;
    cfg.close();
}

string obter_frase(string arquivo, int x){
    fstream arq;
    arq.open(arquivo.c_str(), ios::in);
    for (int i = 0; i<x-1; i++){
        while (arq.good()){
            string linha;
            getline(arq, linha);
            if (linha[0]=='%'){
                break;
            }
        }
    }
    string frase = "";
    while (arq.good()){
        string linha;
        getline(arq, linha);
        if (linha[0]=='%'){
            break;
        }else{
            frase = frase + linha + '\n';
        }
    }
    arq.close();
    return frase;
}
