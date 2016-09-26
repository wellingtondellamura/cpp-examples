#include <iostream>
using namespace std;

struct aluno{
  int dia;
  int mes;
  int ano;
  string nome;
}
void union(int v1[], t1, int v2[], t2, int v3[]);
void bubblesort(int v[], int t);
void print(int v[], int t);

int main(){
    aluno* a;
    a.dia = 7;
    a.mes = 4;
    a.ano = 1986

    int vet[] = {7,8,1,2,5};
    int tam = sizeof(vet)/sizeof(int);
    print(vet, tam);
    bubblesort(vet);
    print(vet);
    return 0;
}

void bubblesort(int v[], int t){
}

void print(int v[], int t ){
  for (int i = 0; i < t; i++){
    cout << v[i] << endl;
  }
}


// void print(int v[]){
//   int i = 0;
//   while (v[i] >= 0){
//     cout << v[i++] << endl;
//   }
// }
