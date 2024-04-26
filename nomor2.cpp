#include <iostream>
using namespace std;

main(){
    string kalimat;
    int i,decimal;
    cout << "Masukkan kalimat : "; getline(cin, kalimat);
    for (i=0;i<kalimat.length(); i++){
        decimal = int(kalimat[i]);
        if (decimal >= 97 && decimal <= 122) decimal -= 32;
        cout << char(decimal);
    }
}