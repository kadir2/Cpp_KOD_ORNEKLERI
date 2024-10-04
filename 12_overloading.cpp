#include <iostream>

using namespace std;


int main(){
    

    class deneme{

    public:

    int topla (int a, int b){
        return a+b;

    }

    double topla (double a, double b){         // float yaparsan ilktopla.topla(5.4f , 3.7f) yapmalısın!
        return a+b;
    }

    
        };

    deneme ilktopla;
    cout << ilktopla.topla(5,6) << endl;
    cout << ilktopla.topla(5.4 , 3.7) << endl;




    return 0;
}
