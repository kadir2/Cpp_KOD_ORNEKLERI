#include <iostream>

using namespace std;

struct adres{

    string il;
    string ilçe;
    string mahalle;
    int nu;
    
};

struct bilgiler{

    string ad;
    string soyad;
    double tel_no;
    adres konum;
};

int main(){

    bilgiler kisi_1 = {"ABDULKADIR" , "ARSLAN" , 5558838001, { "ISTANBUL" , "BEYOGLU" , "GUMUSSUYU MAH." , 65}};


    cout << kisi_1.ad << endl;
    cout << kisi_1.soyad << endl;
    cout << kisi_1.tel_no << endl;
    cout << kisi_1.konum.il << endl;
    cout << kisi_1.konum.ilçe << endl;
    cout << kisi_1.konum.mahalle << endl;
    cout << kisi_1.konum.nu << endl;

return 0;
}
