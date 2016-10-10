#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    int* ptr = NULL;
    int max = 100000000;
    srand(time(NULL));
    ptr = (int*) malloc(sizeof(int));
    cout << "Sorteando os números...";
    for (int i = 0; i < max; i++){
        int x = rand() % 100 + 1;
        ptr[i] = x;
        int* temp = (int*) realloc(ptr,(i+2)*sizeof(int));
        ptr = temp;
    }
    cout << "...[ok]" << endl;
    double media = 0;
    for (int i = 0; i<max; i++){
        media += ptr[i];
    }
    media = media/max;
    cout <<"Media: "<< media << endl;
    return 0;
}
