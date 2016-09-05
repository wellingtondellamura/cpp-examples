#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    for (int z = 0; z < 10000000;z++){
        int v[6];
        int globo[60];
        for (int i=0; i<60;i++){
            globo[i] = i+1;
        }
        srand (time(NULL));
        for (int i = 0; i<6; i++){
            int x, p;
            do{
                p = rand() % 60;
                x = globo[p];
            }while (x == 0);
            globo[p] = 0;
            v[i] = x;
        }

        for (int i = 0; i<6;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
