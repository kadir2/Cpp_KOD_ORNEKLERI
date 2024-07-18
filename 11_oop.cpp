#include <iostream>

using namespace std;
//object-oriented programming

class student{
public:

string name;
void soyle(){
  cout<<"ogrenci ismi: " << name <<endl; 
}

};


int main(){
student ogrenci_1;
student ogrenci_2;

ogrenci_1.name = "oğuz";
ogrenci_2.name = "kaan";

ogrenci_1.soyle();
ogrenci_2.soyle();

  return 0;
}
