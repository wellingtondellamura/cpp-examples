#include<iostream>
#include<cstdio>
#include<cstdlib>

int dobrar(int trololo){
    return trololo * 2;
}

void dobrar_ptr(int *trololo){
    *trololo = *trololo * 3;
}

double aumenta_salario(double salario, double aumento){
    double valor = salario * aumento;
    double novo =  salario + valor;
    return novo;
}

int main(){
    // int x, *y;
    // x = 10;
    // y = &x;
    // std::cout << y << "\n";
    // std::cout << *y << "\n";
    // std::cout << &y << "\n";
    // printf("%d\n", x);
    // return 0;
    char x[1];
    for (int i = 0; i<10000000000; i++){
         std::cout << x[i];
    }

}
