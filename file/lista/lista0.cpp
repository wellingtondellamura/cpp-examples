#include <iostream>
#include <fstream>

#define NOMEARQ "dados.txt"

using namespace std;

struct Contato {
  string nome;
  string telefone;
  string email;
};

void listar();//exibe todos os contatos do arquivo

Contato ler_contato(); //le os dados que o usuario informar
int menu(); //mostra o menu com as opções disponíveis

int main(){
    fstream arq;
    arq.open(NOMEARQ, ios::out | ios::app);
   int op;
   do {
       op = menu();
       switch (op) {
           case 1:{
                Contato c = ler_contato();
                arq << c.nome << endl;
                arq << c.telefone << endl;
                arq << c.email << endl;
                break;
           }
           case 2: {
               listar();
               break;
           }
       }
   } while (op != 3);
   arq.close();
   return 0;
}

int menu(){
    cout << "Lista de Contatos " << endl;
    cout << "[1] Adicionar " << endl;
    cout << "[2] Listar" << endl;
    cout << "[3] Sair" << endl;
    cout << endl;
    int x;
    cout << "Sua opção: ";
    cin >> x;
    return x;
}

Contato ler_contato(){
    Contato c;
    cin.ignore();
    cout << "Novo contato" << endl;
    cout << "Nome:";
    getline(cin, c.nome);
    cout << "Telefone:";
    getline(cin, c.telefone);
    cout << "E-mail:";
    getline(cin, c.email);
    return c;
}

void listar(){
    fstream arq;
    arq.open(NOMEARQ, ios::in);
    while (arq.good()){
        string nome, telefone, email;
        getline(arq, nome);
        if (nome.length() == 0){
            continue;
        }
        getline(arq, telefone);
        getline(arq, email);
        cout << nome << "\t\t" << telefone << "\t\t" << email << endl;
    }
    arq.close();
}
