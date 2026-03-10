#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string invertir(string s){
    string a;
    for (int i=s. length(); i>0; i--){
        a +=s[i];
    }
    return a;
}
int main(){
    string s,r;
    cout<<"Introdueixi la paraula a girar: "<<endl;
    cin>> s;
    r = invertir (s);
    cout<<"La cadena "<<s<<" a l'inrevés és "<<r<<endl;
    return 0;
}