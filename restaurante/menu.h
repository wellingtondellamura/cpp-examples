#include <iostream>
using namespace std;
/*
Assinaturas
*/
string nome_item(int);
double valor_item(int);
void mostrar_item(int);


/*
implementacao
*/
/********************************************/
void mostrar_item(int codigo){
  cout << codigo << "\t\t" << nome_item(codigo) << "\t\t"<< valor_item(codigo) << endl;
}
/********************************************/
string nome_item(int codigo){
  switch(codigo){
    case 1: return "Ravioli de Queijo";
    case 2: return "Fettuccine de Camarões";
    case 3: return "Cappeletti Recheado";
    case 4: return "Espaguete com frutos do mar";
    case 11: return "Cerveja Artesanal";
    case 12: return "Suco Organico Natural";
    case 13: return "Vinho do Porto";
    case 14: return "Grappa Italiana";
  }
}
/********************************************/
double valor_item(int codigo){
  switch(codigo){
    case 1: return 50;
    case 2: return 80;
    case 3: return 40;
    case 4: return 87;
    case 11: return 15;
    case 12: return 12;
    case 13: return 20;
    case 14: return 17;
  }
}
