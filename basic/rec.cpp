#include <iostream>
using namespace std;

int v = 0;
int m;

void pedir_moeda();
void cafe();

int main(){
    cafe();
}

void pedir_moeda(){
    cout << "Saldo: " << v << endl;
    cout << "Insira moeda: ";
    cin >> m;
    v += m;
    cafe();
}

void cafe(){
    if (v >= 100){
        cout << "Cafe" << endl;
        v -= 100;
        if (v > 0){
            cafe();
        }
    } else {
        pedir_moeda();
    }
}
