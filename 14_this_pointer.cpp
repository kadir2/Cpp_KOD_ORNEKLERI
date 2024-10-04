#include <iostream>

using namespace std;




class ELEMANLAR{

  private:
    string name;
    int age;
    int salary;

  public:

    ELEMANLAR(string name, int age, int salary){
        this->name = name; // aynısına eşitlemek için this pointeri kullanılır
        this->age = age;
        this->salary = salary;
    }

    
    void returninfo(){
        cout << name << endl;   // this->name gerek olmaya biliyor
        cout << age << endl;
        cout << salary << endl;
    }
};


int main(){
    
    ELEMANLAR eleman1("Yusuf", 21, 50000);

    eleman1.returninfo();



    return 0;
}
