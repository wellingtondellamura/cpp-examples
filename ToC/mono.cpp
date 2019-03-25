#include <cstdio>

using namespace std;

int main(){
    int aux = 1;
    int x = 2;
    int y = 7;
    int i = 0;
    xuxu:
        i = i + 1;
        aux = aux * x;
        if (i < y) goto xuxu;

    printf("%d\n", aux);
}
