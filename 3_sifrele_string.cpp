#include <iostream>

using namespace std;


int main(){

string sifre ="sifrembudur";
string input;

cout << "Lütfen Parolanızı Girin:";
cin >> input;

if(sifre==input){

    cout <<"parola doğru";
}
    else 
        cout <<"parola yanlış";


return 0;
}
