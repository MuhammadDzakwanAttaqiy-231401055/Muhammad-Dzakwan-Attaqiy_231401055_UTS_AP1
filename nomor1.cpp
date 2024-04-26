#include <iostream>
using namespace std;

string digit(int waktu){
    string waktuString = to_string(waktu);
    if (waktuString.length() == 1) return "0"+waktuString;
    else return waktuString;
}

main(){
    int detik,jam,menit;
    ulang:
    cout << "Input detik : "; cin >> detik;
    if (detik < 0 ) {
        cout << "Anda menginput bilangan dibawah 0" << endl;
        goto ulang;
    }
    jam = detik / 3600;
    detik %= 3600;
    menit = detik/60;
    detik%= 60;

    cout << digit(jam) << ":" << digit(menit) << ":" << digit(detik);
}