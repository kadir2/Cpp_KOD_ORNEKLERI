#include <iostream>

using namespace std;

int main()
{


int a = 20;
int b;

cout<<"a = "<<a<<endl;

for(int i = sizeof(a)*8-1; i > 0; i--){

 cout<< ((a>>i)&1) ;
}

b = ~a;
cout<<endl;

for(int i = sizeof(int)*8-1; i > 0; i--){

 cout<< ((b>>i)&1) ;
}

cout<<endl;

b=b+1;


for(int i = sizeof(int)*8-1; i > 0; i--){
  cout<< ((b>>i)&1) ;
}

cout<<endl;

cout<<"b = "<<b<<endl;  

    return 0;
}
