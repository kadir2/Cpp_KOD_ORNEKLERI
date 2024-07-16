#include <iostream>

using namespace std;


int main(){

int fact=1;
int sayi;

cin >> sayi;

for(int i=1; i<=sayi; i++){

    fact *=i ;
}

cout << sayi<<"'nin faktoriyeli: "<< fact;

return 0;
}
