#include <iostream>
#define MSG_PT_BR "Informe seu nome"
#define MSG_EN_US "What's your name"
#define MSG_ES    "Diga tu nombre"

using namespace std;
int main(){
    string nome;
    string saudacao = "Olá";
    string msg;

    msg = MSG_PT_BR;
    
    cout << msg;
    getline(cin, nome);
    cout <<  saudacao << nome << endl;
    return 0;
}
