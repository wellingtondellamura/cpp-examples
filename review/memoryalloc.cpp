#include <iostream>
using namespace std;
void print(int x){
    cout << x << endl;
    if (x > 0){
        print(x-1);
    }

}

int main(){
    print(10);
}
