#include <iostream>

using namespace std;

void atrib(int *x, int valor){
  *x = valor;
}

int main(){
    int x[] = {10,20,30,40,50};
    int *p = x;
    cout << "int " << sizeof(int) << endl;
    cout << "p " << sizeof(p) << endl;
    cout << "x " << sizeof(x) << endl;

}
