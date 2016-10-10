#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct DList{
    int max = 0;
    int size = 0;
    int inc = 10;
    int* items = NULL;

    bool insert(int x){
        cout << "Insert " << x << endl;
        if (size == max){
            max = max + inc;
            if (items == NULL){
                cout << ">>>> First allocation." << endl;
                items = (int *) malloc(max * sizeof(int));
            }else{
                cout << ">>>> Realloc." << endl;
                int* temp = (int*) realloc(items, max * sizeof(int));
                items = temp;
            }
        }
        if (items == NULL){
            cout << "Error." << endl;
            return false;
        }
        items[size] = x;
        size++;
        cout << "Success." << endl;
        return true;
    }
};

int main(){
    DList list;
    srand(time(NULL));
    for (int i = 0; i < 11; i++){
        int x = rand() % 100 + 1;
        list.insert(x);
    }

    for (int i = 0; i < list.size; i++){
        cout << list.items[i] << " ";
    }
    cout << endl;
    return 0;
}
