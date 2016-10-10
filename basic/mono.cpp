#include <iostream>
using namespace std;
int main(){
    int v = 0;
    int m;
    r1:
    cout << "Saldo: " << v << endl;
    cout << "Insira moeda: ";
    cin >> m;
    v += m;
    r2:
    if (v >= 100){
        cout << "Cafe" << endl;
        v -= 100;
    } else {
        goto r1;
    }
    if (v > 0){
        goto r2;
    } else {

    }
}
