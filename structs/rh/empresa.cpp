#include <iostream>
#include <string>

#include "dados.hpp"
#include "lista.hpp"

Setor ler_setor();
void listar_setores(Lista_setor);

int menu();

using namespace std;
int main(){
    Lista_setor setores;
    listar_setores(setores);
    int op = 0;
    do {
        op = menu();
        switch (op){
            case 1: {
                Setor s1 = ler_setor();
                if (!setores.inserir(s1)){
                    cout << "Erro ao inserir" << endl;
                }
                break;
            }
            case 2: {
                listar_setores(setores);
                break;
            }
        }
    } while (op != 0);
}

int menu(){
    cout << "== EMPRESA BIRLL ==" << endl;
    cout << "-------------------" << endl;
    cout << "[1] Inserir Setor" << endl;
    cout << "[2] Listar Setor" << endl;
    cout << "-------------------" << endl;
    cout << "[0] Sair" << endl;
    cout << "Opção: ";
    int op;
    cin >> op;
    return op;
}

Setor ler_setor(){
    Setor s;
    cout << "== Ler Setor ==" << endl;
    cout << "Descrição: ";
    cin.ignore();
    getline(cin, s.descricao);
    cout << "Adicional: ";
    cin >> s.adicional;
    return s;
}

void listar_setores(Lista_setor lista){
    cout << "== Lista de Setores ==" << endl;
    if (lista.size > 0){
        for (int i = 0; i < lista.size; i++){
            Setor s = lista.items[i];
            cout << s.descricao << "\t" << s.adicional << endl;
        }
    } else {
        cout << "Nenhum setor encontrado" << endl;
    }
}
