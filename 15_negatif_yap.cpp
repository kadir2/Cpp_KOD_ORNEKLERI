#include <iostream>

using namespace std;

int main()
{


int a = 20;

cout<<"                    a = "<<a<<endl<<"                    a =";

for(int i = sizeof(a)*8-1; i > 0; i--){
    if(i%8 == 0){
        cout<< " " ;
    }
 cout<< ((a>>i)&1) ;
}

a = ~a;
cout<<endl<<"one's complement of a =";

for(int i = sizeof(int)*8-1; i > 0; i--){
    if(i%8 == 0){
        cout<< " " ;
    }
    
 cout<< ((a>>i)&1) ;
}

cout<<endl<<"two's complement of a =";

a=a+1;


for(int i = sizeof(int)*8-1; i > 0; i--){
    if(i%8 == 0){
        cout<< " " ;
    }
  cout<< ((a>>i)&1) ;
}

cout<<endl;

cout<<"two's complement of a = "<<a<<endl;

    return 0;
}
