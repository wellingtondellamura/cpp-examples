#include <string>

using namespace std;

string enclose(string tag, string txt){
    return "<"+tag+">"+txt+"</"+tag+">";
}

string bold(string txt){
    return enclose("b", txt);
}
