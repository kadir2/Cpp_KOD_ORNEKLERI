#include <iostream>

using namespace std;


int main(){

float a[3][3]={{2,43,6},{2,5,7},{9,4,1}};
float b[3]={2,5,3};


cout<<"matrisi girin: "; //matrisi bu şekilde de girilebilir
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
cout<<"sonuç matrisi girin: ";
for(int i=0;i<3;i++)
cin>>b[i];



    
cout<<"girilen matris:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << a[i][j]<<" ";
    }
    cout<<"  "<<b[i];
cout<<endl;
}
cout<<endl;
b[2] = b[2] + (-b[0]/a[0][0]*a[2][0]);
a[2][2] = a[2][2] + (-a[0][2]/a[0][0]*a[2][0]); //row:3 col:1
a[2][1] = a[2][1] + (-a[0][1]/a[0][0]*a[2][0]);
a[2][0] = a[2][0] + (-a[0][0]/a[0][0]*a[2][0]);

b[1] = b[1] + (-b[0]/a[0][0]*a[1][0]);
a[1][2] = a[1][2] + (-a[0][2]/a[0][0]*a[1][0]); //row:2 col:1
a[1][1] = a[1][1] + (-a[0][1]/a[0][0]*a[1][0]);
a[1][0] = a[1][0] + (-a[0][0]/a[0][0]*a[1][0]);

b[2] = b[2] + (-b[1]/a[1][1]*a[2][1]);
a[2][2] = a[2][2] + (-a[1][2]/a[1][1]*a[2][1]); //row:3 col:2
a[2][1] = a[2][1] + (-a[1][1]/a[1][1]*a[2][1]);

b[1] = b[1] + (-b[2]/a[2][2]*a[1][2]);
a[1][2] = a[1][2] + (-a[2][2]/a[2][2]*a[1][2]); //row:2 col:3

b[0] = b[0] + (-b[2]/a[2][2]*a[0][2]);
a[0][2] = a[0][2] + (-a[2][2]/a[2][2]*a[0][2]); //row:1 col:3

b[0] = b[0] + (-b[1]/a[1][1]*a[0][1]);
a[0][1] = a[0][1] + (-a[1][1]/a[1][1]*a[0][1]); //row:1 col:2

b[0] = b[0]/a[0][0];
b[1] = b[1]/a[1][1];
b[2] = b[2]/a[2][2];
a[0][0] = a[0][0]/a[0][0];
a[1][1] = a[1][1]/a[1][1];
a[2][2] = a[2][2]/a[2][2];



cout<<"x1: "<<b[0]<<endl; 
cout<<"x2: "<<b[1]<<endl; 
cout<<"x3: "<<b[2]<<endl; 

/*
for(int i=0;i<3;i++){      //test kısmı
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
cout<<endl;
}

for(int i=0;i<3;i++){
   cout<<b[i]<<" ";
cout<<endl;
}
*/

return 0;
}
