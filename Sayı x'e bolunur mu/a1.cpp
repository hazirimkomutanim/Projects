#include <iostream>
using namespace std;

int main() {

    int sayi;
    cin >> sayi;

    if(sayi >= 0) {

        if(sayi%3 == 0) {

            cout << "Sayi 3'e kalansiz bolunur.";

        }

        else {

            cout << "Sayi 3'e kalansiz bolunmez.";

        }

    }

    else {

        cout << "Pozitif sayi giriniz.";

    }

    return 0;

    }
