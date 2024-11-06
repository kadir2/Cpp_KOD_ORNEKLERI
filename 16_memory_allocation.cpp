#include <iostream>

using namespace std;


int main(){

int x;
int *p;
p=&x;
x=10;
cout<<x<<endl; // x or *p
// print 10


p = new int;
*p = 20;
cout<<*p<<endl;
// print 20

delete p;
cout << *p << endl;
// print 0 because the memory is deallocated

cout << x << endl;
// print 10


return 0;
}
