#include <iostream>
#include <ctime>
using namespace std;


class HesapMakine {

    private:
        int sayi1, sayi2;

    public:
        HesapMakine() : sayi1(0), sayi2(0) {}

        void sayigiris() {

            std::cout << "Birinci sayiyi giriniz: ";
            std::cin >> sayi1;
            std::cout << "Ikinci sayiyi giriniz: ";
            std::cin >> sayi2;

        }

        void cikarma() {
            cout << "Sonuc: " << sayi1 - sayi2 << endl;
        }
        void toplama() {
            cout << "Sonuc: " << sayi1 + sayi2 << endl;
        }
        void carpma() {
            cout << "Sonuc: " << sayi1 * sayi2 << endl;
        }
        void bolme() {
            if (sayi2 != 0)
                cout << "Sonuc: " << sayi1 / sayi2 << endl;
            else
                cout << "0 paydaya gelemez!" << endl;
        }

};


int main() {

    int islemsecim;
    HesapMakine hesapMakine;

    do {

        std::cout << "1. Toplama\n";
        std::cout << "2. Cikarma\n";
        std::cout << "3. Carpma\n";
        std::cout << "4. Bolme\n";
        std::cout << "0. Cikis\n";
        std::cout << "Islem seciniz: ";

        std::cin >> islemsecim;


        switch (islemsecim) {

            case 1:
                hesapMakine.sayigiris();
                hesapMakine.toplama();
                break;
            case 2:
                hesapMakine.sayigiris();
                hesapMakine.cikarma();
                break;
            case 3:
                hesapMakine.sayigiris();
                hesapMakine.carpma();
                break;
            case 4:
                hesapMakine.sayigiris();
                hesapMakine.bolme();
                break;
            case 0:
                std::cout << "Cikis yapiliyor.\n";
                break;
            default:
                std::cout << "Geçersiz islem. Tekrar deneyiniz.\n";

        }

    } while (islemsecim != 0);

    return 0;
}

