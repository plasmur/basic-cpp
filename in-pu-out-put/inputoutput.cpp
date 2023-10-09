#include <iostream>
using namespace std;


int main(){
    float num1, num2;
    float sum, sum1, sum2, sum3;
    cout<<" masukan semua angka (bisa - atau + dan pecahan): ";
    cin>> num1;
    cout<<" masukan angka lain (bisa - atau + dan pecahan): ";
    cin>> num2;
    sum = num1 + num2;
    cout<< " Nilai dari kedua angka tersebut adalah: "<< sum<<endl;
    sum1 = num1 * num2;
    cout<<" hasil dari perkalian antara dua angka adalah: "<< sum1<<endl;
    sum2 = num1 / num2;
    cout<<" hasil dari pembagiannya adalah: "<< sum2<<endl;
    sum3 = num1 - num2;
    cout<<" hasil dari pengurangan adalah/n :"<< sum3<<endl;

}
