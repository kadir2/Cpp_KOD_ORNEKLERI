#include <iostream>

using namespace std;


class ELEMANLAR{

public:

    void kayit(string isim_, int yas_, int maas_){
        isim = isim_;
        yas = yas_;
     maas = maas_;
    }
    void printinfo(){
        cout <<"isim: " << isim << endl;
        cout <<"yas: " << yas << endl;
        cout <<"maas: " << maas << endl;

    }


private:
    string isim;
    int yas;
    int maas;

};


int main(){

ELEMANLAR* eleman;

eleman = new ELEMANLAR();

eleman->kayit("Yusuf", 21, 61000);

eleman->printinfo();

(eleman+1)->kayit("Bengisu", 22, 60000);
(eleman+1)->printinfo();

delete eleman;

return 0;

}
