#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int *x;
        
    x = (int*) malloc(sizeof(int));
    *x = 10;
    cout << *x << endl;
    return 0;
}
