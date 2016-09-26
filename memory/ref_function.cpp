#include <iostream>

using namespace std;

void read_int(int *var){
    int x;
    cin >> x;
    *var = x;
}

void read_date(int *d, int *m, int *y){
    int day, month,  year;
    cout << "Day[dd]:";
    cin >> day;
    cout << "Month[mm]:";
    cin >> month;
    cout << "Year[yyyy]:";
    cin >> year;
    *d = day;
    *m = month;
    *y = year;
}

int main(){
    int y;
    int d1, m1, y1;
    cout << "Inform an integer:" << endl;
    read_int(&y);
    cout << y << endl;
    cout << "Enter your birthdate:" << endl;
    read_date(&d1, &m1, &y1);
    cout << "You born in " << y1 << endl;
    return 0;
}
