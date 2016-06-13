#include <iostream>
#include <cctype>

using namespace std;
int main(){
    string nome;
    cout << "Informe seu nome";
    getline(cin, nome);
    int x = nome.length();
    for (int i = 0; i < x; i++){
        cout << (char)toupper(nome[i]) << endl;
    }
    return 0;
}
