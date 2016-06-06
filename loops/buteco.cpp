#include <iostream>
#include <cstdlib>

#define PINGA       0.5
#define DOLLY       1.5
#define COCA        8.7
#define COROTE      4.8
#define ESPETO      3
#define TORRESMO    2.5

using namespace std;

int main(){
    double conta = 0;
    int pedido = 0;
    while (pedido != 9){
        system("clear");
        cout << "#####################" << endl;
        cout << "# BUTECO DA ESQUINA #" << endl;
        cout << "#####################" << endl << endl;
        cout << "-------CARDÁPIO------" << endl;
        cout << "[1] Pinga: \t"<< PINGA << endl;
        cout << "[2] Dolly: \t"<< DOLLY << endl;
        cout << "[3] Coca Cola: \t"<< COCA << endl;
        cout << "[4] Corotinho: \t"<< COROTE << endl;
        cout << "[5] Espetinho: \t"<< ESPETO << endl;
        cout << "[6] Torresmo: \t"<< TORRESMO << endl;
        cout << "---------------------" << endl;
        cout << "[9] SAIR" << endl;
        cout << "---------------------" << endl;
        cout << "Sua escolha: ";
        cin >> pedido;
    }
    cout << "Total da conta: "<< conta << endl;
    cout << "Volte sempre!" << endl;
    return 0;
}
