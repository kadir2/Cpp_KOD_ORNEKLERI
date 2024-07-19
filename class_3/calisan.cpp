#include "calisan.h"

void personeller::pin(string name_, int age_, char gender_,int salary_) {
    name = name_;
    age = age_;
    gender = gender_;
    salary = salary_;
}

void personeller::find() {
    cout << name << " " << age << " " << gender << " " << salary << endl;
}
