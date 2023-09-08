#include <iostream> //untuk diperlihat di terminal
using namespace std; //agar bisa memasukan nilai ke terminal

int main(){

    int day; 
    cout<<" masukan angka diantara 1 dan 7: "; //cin is a statement that reads input the value entered 
    cin>> day;

    switch (day) {
    
        case 1:
            cout<< " butuh motivasi karena ini adalah hari senin ";
            break;

        case 2:
            cout<< " hari ini adalah hari salsa karena hari selasa ";
            break;

        case 3: 
            cout<< " tinggal beberapa hari lagi akhir minggu karena hari ini rabu ";
            break;

        case 4:
            cout<< " pulangnya agak lama karena adik les di hari kamis ";
            break; 

        case 5:
            cout<< " sebentar lagi jum' at tan mari kita siap siap ";
            break;

        case 6:
            cout<< " hari ini ada lomba karena sabtu libur ";
            break;

        case 7:
            cout<< " minggu ini banyak tugasnya ya. ";
            break;
        
        default: //kalau selain 1 sampai 7
            cout<<"input kamu salah";
            break;
    }


}

