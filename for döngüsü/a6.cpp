#include <iostream>
#include <ctime>
using namespace std;

int d_yili[5];
int x = 2003;

int main() {


    for (int i = 0; i < 6; i++) {

        d_yili[i] = x++;

    }

    for (int i = 0; i < 6; i++) {

        cout << i+1 ;
        cout << ". arkadasimin dogum yili: " << d_yili[i] << endl;

    }


}

