#include <iostream>
using namespace std;

int main() {
    int tanggal;
    float part_tubuh;
    string adjective, adjective2, TypeOfBird, Room, Verb, Verb2, Relative_name;
    string thing, liquid, verb_ing, partofbody, nouns, verb_ing2, noun2; 
    
    cout<<"Masukan tanggal bulan\n: ";
    cin>>tanggal;
    cout<<"Masukkan sebuah kata sifat\n: ";
    cin>>adjective;
    cout<<"Masukan sebuah kata sifat lain\n: ";
    cin>>adjective2;
    cout<<"Masukan jenis burung\n: ";
    cin>>TypeOfBird;
    cout<<"masukan kamar dari sebuah rumah\n: ";
    cin>>Room;
    cout<<"masukan kata kerja \n: ";
    cin>>Verb;
    cout<<"masukan kata kerja lampau\n: ";
    cin>>Verb2;
    cout<<"masukan nama\n: ";
    cin>>Relative_name;
    cout<<"masukan sebuah barang\n: ";
    cin>>thing;
    cout<<"masukan cairan\n: ";
    cin>>liquid;
    cout<<"masukan kata kerja yang sedang dilakukan\n: ";
    cin>>verb_ing;
    cout<<"masukan bagian tubuh\n: ";
    cin>>part_tubuh;
    cout<<"masukan bagian tubuh (plural) \n: ";
    cin>>partofbody;
    cout<<"masukan kata benda\n: ";
    cin>>nouns;
    cout<<"masukan kata kerja yang sedang dilakukan lagi\n: ";
    cin>>verb_ing2;
    cout<<"masukan kata benda lainnya\n: ";
    cin>> noun2;



   

   cout<<"\n\nitu adalah " << tanggal << " November "<<adjective<< " hari yang bagus.\naku bangun karena " <<adjective2<< " menghirup bau "<<TypeOfBird<< " digoreng di "<<Room;
    cout<<" bawah. \n "<<Verb<<" aku ke bawah untuk membantu "<<Verb2<<" makan malam.\nibuk ku bilang, lihat kalau "<<Relative_name<<" membutuhkan minuman "<<noun2<<endl;
    cout<<" jadi, kau membawa satu gelas penuh "<<liquid<<" di "<<verb_ing <<" kamar.";
    cout<<" ketika aku sudah disana, aku terkejut "<<part_tubuh<<" "<<partofbody<<" ada "<<nouns<<" "<<verb_ing2<<" di "<<noun2;
    return 0; 


}

