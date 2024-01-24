#include <iostream>
using namespace std;

int main() {

    int sicaklik;
    cout << "Deger giriniz:";
    cin >> sicaklik;

    if(sicaklik <= 0) {

        cout << "kati";

    }
    else if(sicaklik >= 0 && sicaklik<100) {

       cout << "sivi";

    }
    else if(sicaklik >= 100 && sicaklik<10000) {

       cout << "gaz";

    }
    else if(sicaklik >= 10000) {

       cout << "plazma";
    }


    return 0;

}
