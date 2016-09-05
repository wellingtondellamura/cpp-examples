#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
    for (int z = 0; z < 10000000;z++){
        int v[6];
        srand (time(NULL)); //inicializa a semente
        for (int i = 0; i<6; i++){
            bool rep;
            int x;
            do{
                rep = false;
                x =  rand() % 60 + 1;
                for (int j = 0; j<i; j++){
                    if (v[j]==x){
                        rep = true;
                        break;
                    }
                }
            }while (rep);
            v[i] = x;
        }

        for (int i = 0; i<6;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
