#include <iostream>
#include <cstdlib>
#include <cctype>
#include <time.h>
#define COW " __________\n< Acertou! >\n ----------\n        \\   ^__^\n         \\  (oo)\\_______\n            (__)\\       )\\/\\\n                ||----w |\n                ||     ||\n\n"
using namespace std;

//Pseudoaleatoriedade (https://pt.wikipedia.org/wiki/Pseudoaleatoriedade)
//What's this fuss about true randomness? (https://www.random.org/)

int main(){
    int x;
    int y;
    char cont;
    srand (time(NULL)); //inicia a semente aleatória com a hora atual
    cout << "Adivinha um numero" << endl;
    cout << "==================" << endl;
    do {
        x =  rand() % 10 + 1; // entre 1 e 10
        cout << "Informe um número entre 1 e 10:" << endl;
        cin >> y;
        if (x == y){
            cout << COW << endl;
            //cout << "\n>>> Acertou! <<<\n" << endl;
        } else {
            cout << "Que pena, você errou. O número era " << x << endl;
        }
        cout << "Deseja continuar?\n[s/n]: ";
        cin >> cont;
        cont = tolower(cont);
    } while (cont != 'n');
    return 0;
}
