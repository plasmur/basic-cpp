#include <iostream>
using namespace std;

int main(){

    // 0 false, 1 true
    // && = and, ||(\) = or
    //and satu salah semua salah, or satu salah semua benar
    int a = 15;
    int b = 19;
    cout<<((a == 0)&&(a>b))<<endl;
    cout<<((a == 0)&&(a<b))<<endl;
    cout<<((a == 15)&&(a>b))<<endl;
    cout<<((a == 15)&&(a<b))<<endl; //true
    cout<<((a == 0)||(a>b))<<endl; //false
    cout<<((a == 0)||(a<b))<<endl; //true
    cout<<((a == 15)||(a>b))<<endl; //true
    cout<<((a == 15)||(a<b))<<endl; //true



    return 0;
}




