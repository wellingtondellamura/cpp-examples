#include <iostream>
#include <string>
using namespace std;

struct Funcionario{
    int registro;
    string nome;
    double salario;

    void ler_dados(){
        cout << "Registro: ";
        cin >> registro;
        cin.ignore();
        cout << "Nome: ";
        getline(cin, nome);
        cout << "Salário: ";
        cin >> salario;
    }
};

Funcionario criar_funcionario();
void ler_funcionario(Funcionario*);
void imprimir_funcionario(Funcionario);

int main(){
    Funcionario f1;
    ler_funcionario(&f1);
    imprimir_funcionario(f1);

    Funcionario f2 = criar_funcionario();
    imprimir_funcionario(f2);

    Funcionario f3;
    f3.ler_dados();
    imprimir_funcionario(f3);

    //imprimir_funcionario(criar_funcionario());
}

Funcionario criar_funcionario(){
    Funcionario f;
    cout << "Registro: ";
    cin >> f.registro;
    cin.ignore();
    cout << "Nome: ";
    getline(cin, f.nome);
    cout << "Salário: ";
    cin >> f.salario;
    return f;
}

void ler_funcionario(Funcionario* f){
    cout << "Registro: ";
    cin >> f->registro;
    cin.ignore();
    cout << "Nome: ";
    getline(cin, f->nome);
    cout << "Salário: ";
    cin >> f->salario;
}

void imprimir_funcionario(Funcionario f){
    cout << "Registro: " << f.registro << endl;
    cout << "Nome: " << f.nome << endl;
    cout << "Salário: " << f.salario << endl;
}
