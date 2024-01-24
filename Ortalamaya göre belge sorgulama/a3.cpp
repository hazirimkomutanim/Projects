#include <iostream>
using namespace std;

int main() {

    int puan;
    cout << "Donem sonu not ortalamasi giriniz:";
    cin >> puan;

    if(puan >= 0 && puan < 50){

        cout << "Ogrenci sinifta kalmixstir.";

    }
    else if(puan >= 50 && puan < 70){

        cout << "Ogrenci belge alamastir.";

    }
    else if(puan >= 70 && puan < 85){

        cout << "Ogrenci Tesekkur Belgesi almistir.";

    }
    else if(puan >= 85 && puan <= 100){

        cout << "Ogrenci Takdir Belgesi almistir.";

    }
    else {

        cout << "Gecersiz deger girdiniz.";

    }

    return 0;

    }
