#include "calisan.cpp"

int main() {
    personeller musti,emo,sevalcan,mervkom,maho,beng;
    musti.pin("mustafa", 20, 'E',38000);
    emo.pin("emirhan",20,'E',42000);
    sevalcan.pin("şevval",19,'K',55000);
    mervkom.pin("merve",21,'K',6000);
    maho.pin("mahmut",20,'E',55000);
    beng.pin("bengisu",21,'K',31);

    musti.find();
    emo.find();
    sevalcan.find();
    mervkom.find();
    maho.find();
    beng.find();


    return 0;
}
