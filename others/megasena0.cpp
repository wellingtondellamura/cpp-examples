#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    srand (time(NULL)); //inicializa a semente
    for (int i = 0; i<6; i++){
        cout <<  rand() % 60 + 1<< " ";
    }
    cout << endl;
    return 0;
}
