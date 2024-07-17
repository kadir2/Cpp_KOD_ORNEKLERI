#include <iostream>

using namespace std;

int main(){

int *ptr1 = nullptr;
int *ptr2 = nullptr;

ptr1 = new int;

*ptr1 = 571;
ptr2 = ptr1;


delete ptr1;

*ptr2=98;
cout << *ptr2; // hata verebilir yani vermeli.

  return 0;
}
