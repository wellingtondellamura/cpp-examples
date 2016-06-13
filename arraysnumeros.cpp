#include <iostream>
#define TAM 5
using namespace std;
int main(){
    int vet[TAM];
    int soma =0;
    for (int i = 0; i<TAM; i++){
        cin >> vet[i];
    }
    cout << "Valores:"<<endl;
    for (int i = 0; i<TAM ; i++){
        cout << vet[i] << endl;
        soma = soma + vet[i];
    }
    cout << "Total: "<<soma << endl;
    return 0;
}
