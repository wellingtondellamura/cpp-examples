#include <iostream>
#include <string>
using namespace std;

struct Funcionario{
    int registro;
    string nome;
    double salario;
    void conceder_aumento(double a){
        salario = salario * (1.0 + a/100.0);
    }
    void ler_dados(){
        cout << "Registro: ";
        cin >> registro;
        cin.ignore();
        cout << "Nome: ";
        getline(cin, nome);
        cout << "Salário: ";
        cin >> salario;
    }
    void imprimir(){
        cout << "Registro: " << registro << endl;
        cout << "Nome: " << nome << endl;
        cout << "Salário: " << salario << endl;
    }
};

Funcionario criar_funcionario();
void ler_funcionario(Funcionario*);
void imprimir_funcionario(Funcionario);
void conceder_aumento(Funcionario*, double);
int main(){
    Funcionario f1;
    f1.ler_dados();
    f1.imprimir();
    // ler_funcionario(&f1);
    // imprimir_funcionario(f1);
    Funcionario f2 = criar_funcionario();
    f2.ler_dados();
    f2.imprimir();

    //imprimir_funcionario(f2);

    Funcionario f3;
    f3.ler_dados();
    imprimir_funcionario(f3);
    Funcionario empresa[100];
    for (int i = 0; i < 100 ; i++){
        //empresa[i] = criar_funcionario();
        empresa[i].ler_dados();
    }
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
void conceder_aumento(Funcionario* f, double a){
    f->salario = f->salario * (1.0 + (a/100.0));
}
