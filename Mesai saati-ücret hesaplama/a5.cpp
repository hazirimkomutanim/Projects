#include <iostream>
using namespace std;

int main() {

    int saatlik_ucret = 50;
    int maas;
    int saat;
    cout << "Toplam mesai saatinizi giriniz:";
    cin >> saat;

    if(saat > 0 && saat < 100){

        maas = saat*saatlik_ucret;
        cout << "Maasiniz:";
        cout << maas;
        cout << "TL";

    }
    else if(saat >= 100 && saat < 250){

        maas = saat*saatlik_ucret*2;
        cout << "Maasiniz:";
        cout << maas;
        cout << "TL";

    }
    else if(saat >= 250 && saat < 360){

        maas = saat*saatlik_ucret*3;
        cout << "Maasiniz:";
        cout << maas;
        cout << "TL";

    }
    else {

        cout << "Gecersiz deger girdiniz.";

    }

    return 0;

}
