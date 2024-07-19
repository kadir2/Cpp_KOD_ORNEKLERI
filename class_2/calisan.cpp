#include "calisan.h"

Calisan::Calisan(int in_id, int in_maas, string in_isim ){
    id = in_id;
    maas = in_maas;
    isim = in_isim;
};

void Calisan::selam(){
    cout << isim << " " << maas << " " << id << endl;
};
