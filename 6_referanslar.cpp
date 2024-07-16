#include <iostream>

using namespace std;

void deger_degistir(int &ref){

ref=40;

}

int main(){
int a=0;
int b=25;
int &ref_1=a; //bu şekilde referans tanımlanırken atanması lazım
//1. kısım
deger_degistir(b);
cout<<b;

//2. kısım
ref_1 =5;
cout<<endl<<a;

return 0;
}
