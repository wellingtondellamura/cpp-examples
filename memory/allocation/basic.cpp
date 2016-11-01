#include <iostream>
#include <cstdlib>
using namespace std;

void memoryUsage(){
    system("cat /proc/`pidof basic`/status  | grep VmSize");
    system("cat /proc/`pidof basic`/status  | grep VmRSS");
    cout << "---------------------------------------------" << endl;
}

int main(){
    char* v;
    long mb = 1024L * 1024L;
    cout << "Before allocation" << endl;
    memoryUsage();

    cout << "Size in mb of array: ";
    long size;
    cin >> size;
    size = size * mb;
    v = (char*) malloc(size * sizeof(char));

    cout << "After allocation" << endl;
    memoryUsage();

    for (long i = 0 ; i < size; i++){
        v[i] = 'X';
    }
    cout << "After use" << endl;
    memoryUsage();
    return 0;
}
