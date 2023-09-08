#include <iostream>
#include <string>
using namespace std;

int main()
{
    //creating variabels 
    int myNum = 5;
    float myFloatnum = 5.99;
    double myDoubleNum = 9.98;
    char myLetter = 'd';
    bool myBolean = true;
    string mystring = "halipuddin"; 

    //print varieble values
    cout<<"int:"<<myNum<<"\t\t\t"<<"size of int:"<<sizeof(myNum)<<"bytes"<<"\n";
    cout<<"float:"<<myFloatnum<<"\t\t"<<"Size of Float:"<<sizeof(myFloatnum)<<"bytes"<<"\n";
    cout<< "double: " << myDoubleNum << "\t"<< "Size of Double: " << sizeof(myDoubleNum)<< " bytes"<<"\n";
    cout<< "char: " << myLetter << "\t\t\t" << "Size of Character: " << sizeof(myLetter)<< " bytes"<< "\n";
    cout<<"bool:"<<myBolean<<"\t\t\t"<<"Size of Boolean:"<< sizeof(myBolean)<<"bytes"<<"\n";
    cout<< "string: " << mystring << "\t" << "Size of String: " << sizeof(mystring)<< " bytes" << "\n";
    return 0;
    
}


