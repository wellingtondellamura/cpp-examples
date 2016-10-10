#include <iostream>
using namespace std;
int main(){
    int v = 0;
    int m;
    do {
        while (v < 100){
            cout << "Saldo: " << v << endl;
            cout << "Insira moeda: ";
            cin >> m;
            v += m;
        }
        if (v >= 100){
            cout << "Cafe" << endl;
            v -= 100;
        }
    } while (v > 0);
}
