#include <iostream>
using namespace std;

main(){
    string bilangan;
    int i,j,angka,total=0;
    bool prima;

    cout << "Masukkan angka : "; cin >> bilangan;
    for (i=0; i<bilangan.length(); i++){
        prima = true;
        // 9 = 57 , 0 = 48 jadi 57-48 = 9
        angka = bilangan[i]-'0';
        if (angka <= 1) prima = false;
        else {
            //cth : angka = 9, yg dicek 2 sampai 8
            for (j=2; j<angka; j++){
                if (angka % j == 0){
                    prima = false;
                    break;
                }
            }
        }
        if (prima){
            total += angka;
        }
    }

    cout << total;
}