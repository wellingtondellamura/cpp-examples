#include <iostream>
#include <cstdlib>

using namespace std;

void read_int(int *var){
    int x;
    cin >> x;
    *var = x;
}

/*
* read_date : lê uma data no formato dd/mm/aaa e retorna
* o dia, mês e ano informado.
*/
void read_date(int *d, int *m, int *y){
    string date;
    string dia = "0";
    string mes = "0";
    string ano;
    getline(cin, date);
    int  i = 0;
    while (date[i] != '/'){
      dia = dia + date[i++];
    }
    i++;
    while (date[i] != '/'){
      mes = mes + date[i++];
    }
    i++;
    ano = date.substr(i);
    int d1,m1,y1;
    d1 = atoi(dia.c_str());
    m1 = atoi(mes.c_str());
    y1 = atoi(ano.c_str());
    //validardata
    *d = d1;
    *m = m1;
    *y = y1;
}

int main(){
    // int y;
    int d1, m1, y1;
    // cout << "Inform an integer:" << endl;
    // read_int(&y);
    // cout << y << endl;
    cout << "Enter your birthdate:" << endl;
    read_date(&d1, &m1, &y1);
    cout << "You born in " << y1 << endl;
    return 0;
}
