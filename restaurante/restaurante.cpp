#include <iostream>
#include "menu.h"

using namespace std;

int main(){
  int menu[] = {1,3,4,11,12,13,14};
  cout << "Restaurante Italiano \"Gli affamati\"" << endl;
  cout << "MENU DO DIA" << endl;
  cout << "Codigo \t Descricao \t Valor" << endl;
  for (int i = 0; i < 7; i++){
    mostrar_item(menu[i]);
  }
  return 0;
}
