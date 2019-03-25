#include <cstdio>
using namespace std;

int rec(int x, int y){
    if (y == 1){
        return x;
    }
    return x*(rec(x, y-1));
}

int main(){
    int x = 2;
    int y = 7;
    int aux = rec(x , y);
    printf("%d\n", aux);
}
