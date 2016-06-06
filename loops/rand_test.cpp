#include <iostream>
#include <cstdlib>
#include <cctype>
#include <time.h>
using namespace std;
int main(){
    long s = time(NULL);
    cout << "Semente: " << s << endl;
    srand (s);
    for (int i = 0; i<1000000; i++){
        int x =  rand() % 60 + 1;
        cout << x << endl;
    }
    return 0;
}
