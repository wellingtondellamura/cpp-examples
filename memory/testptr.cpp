#include <iostream>

using namespace std;

int main(){
    int x = 10;
    cout << "Now ptr points to: "<< &x << endl;
    int *ptr = &x;
    cout << "Address that ptr points: ";
    cout << ptr << endl;
    cout << "Value of the address that ptr points: ";
    cout << *ptr << endl;
    cout << "Address of ptr: ";
    cout << &ptr << endl;
    cout << "Change ptr to 50: *ptr = 50;" << endl;
    *ptr = 50;
    cout << "The new value of x:";
    cout << x << endl;
    return 0;
}
