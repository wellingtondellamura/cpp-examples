#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int *x;
    x = (int*) malloc(4);
    *x = 10;
    cout << *x << endl;
    return 0;
}
