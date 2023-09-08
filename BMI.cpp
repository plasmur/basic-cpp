#include <iostream>
using namespace std;
int main(){

    double weight, height, BMI; // untuk mendefenisikan variabel dengan cepat
    
    //untuk memasukan berat dan tinggi user
    cout<<" masukan berat kamu dalam kilogram: ";
    cin>>weight;
    cout<<" masukan tinggi berat badan di meter: ";
    cin>>height;
    
    //menghitung BMI
    BMI = weight/(height * height);
    
    //menunjukan BMI nya
    cout<<" BMI mu adalah: "<<BMI<<endl; //endl di README

    //Kategori BMI 
    if (BMI < 18.5){
        cout<<" You are underweight. "<<endl;    
    } else if (BMI <= 24.9){
        cout<<" You have a normal weight."<<endl;
    } else if (BMI <= 29.9){
        cout<<" You are overweight."<<endl;
    } else if (BMI <= 34.9){
        cout<<" you are Obese. "<<endl;
    } else{
        cout<<" You are extremely Obese. "<<endl;
    }


    return 0;
   









}