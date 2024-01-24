#include <iostream>
using namespace std;

int main() {

    int yas;
    cout << "Lutfen yas giriniz:";
    cin >> yas;

    if(yas >= 0 && yas < 18) {

        cout << "Bilet fiyati 15TL";

    }
    else if(yas >= 0 && yas < 18) {

        cout << "Bilet fiyati 15TL";

    }
    else if(yas >= 18 && yas < 65) {

        cout << "Bilet fiyati 20TL";

    }
    else if(yas >= 65 && yas < 123) {

        cout << "Bilet fiyati 10TL";

    }
    else {

        cout << "Gecersiz deger girdiniz.";

    }

    return 0;
    }
