// hapus Stdio.H ganti jadi iostream 
#include <iostream>
//perbaikan include dan math.h nya di dlm <>
#include <math.h>
//penambahan std 
using namespace std;

//perbaikan float ke int
int main(void) {
    // perbaikan SYSTEM = system, : = ;
    system("CLS");

    cout << "Insert a number: ";

    // penambahan inisiasi variabel n
    int n;
    // perbaikan << -> >>
    cin >> n;

    // ubah tanda >= jadi <=
    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
        //tambahi exit(0);
        exit(0);
    } else {
        //ubah i=1 jadi i=2
        for (int i = 2; i <= sqrt(n); i++) {
            //ubah 1 jadi i, 2 jadi 0
            if (n % i == 0) {
                // ubah >> jadi <<
                cout << n << " bukanlah bilangan prima.";
                //tambahi exit(0)
                exit(0);
            }
        }
        // ubah coute jadi cout, dan >> jadi <<
        cout << n << " Merupakan bilangan prima.";
    }

    return 1;
}