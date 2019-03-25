#include <cstdio>

using namespace std;

int main(){
    int aux = 1;
    int x = 2;
    int y = 7;
    for (int i = 0; i < y; i++) {
        aux *= x;
    }
    printf("%d\n", aux);
}
