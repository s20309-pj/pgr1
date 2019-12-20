
#ifndef ZJAZD3_WSKAZNIKINAZMIENNE_H
#define ZJAZD3_WSKAZNIKINAZMIENNE_H


#include <iostream>

class WskaznikiNaZmienne {

public:
    void wskaNazienne() {
        int zmienn = 0;
        int *n = &zmienn;

        int zmiennk = 0;
        int *k = &zmiennk;


        std::cout << "Podaj koleno n i k: " << std::endl;
        std::cin >> *n >> *k;

        int zm1 = 1;
        int *sn = &zm1;
        for (int i = 2; i <= *n; i++) {
            *sn = (*sn) * i;
        }

        int zm2 = 1;
        int *sk = &zm2;
        for (int i = 2; i <= *k; i++) {
            *sk = (*sk) * i;
        }

        int zm3 = 1;
        int *snk = &zm3;
        for (int i = 2; i <= *n - (*k); i++) {
            *snk = (*snk) * i;
        }

        std::cout << "Symbol Newtona n nad k wynosi: " << *sn / ((*sk) * (*snk));

    }

};


#endif //ZJAZD3_WSKAZNIKINAZMIENNE_H
