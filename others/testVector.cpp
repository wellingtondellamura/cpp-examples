#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(3);
    v.push_back(9);
    v.push_back(2);
    v.push_back(11);
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}
