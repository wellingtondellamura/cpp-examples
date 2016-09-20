#include <iostream>

using namespace std;

void atrib(int *x, int valor){
  *x = valor;
}

int main(){
    int x = 10;
    int y = 20;
    int *p;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    p = &x;
    *p = 30;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    p = &y;
    *p = 100;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    atrib(&x, 500);

    return 0;
}
