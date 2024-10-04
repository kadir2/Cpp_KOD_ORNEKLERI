#include <iostream>

using namespace std;




class ELEMANLAR{

  private:
    string name;
    int age;
    int salary;

  public:

    ELEMANLAR(string isim, int yas, int maas){
        name = isim;
        age = yas;
        salary = maas;
    }

    
    void returninfo(){
        cout << name << endl;
        cout << age << endl;
        cout << salary << endl;
    }
};


int main(){
    
    ELEMANLAR eleman1("Yusuf", 21, 41000);

    eleman1.returninfo();



    return 0;
}
