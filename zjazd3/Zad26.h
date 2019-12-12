#include<ctime>
#include<cstdlib>
#include <iostream>

#ifndef ZJAZD3_ZAD26_H
#define ZJAZD3_ZAD26_H


class Zad26 {

public:
    int pyk() {

        int tab[10];

        std::cout << std::endl << "Array: " << std::endl;
        for (int i = 0; i < 10; i++) {
            tab[i] = rand() % 10 + 1;
            std::cout << "[" << i << "]=" << tab[i] << "  ";
        }

        std::cout << std::endl << "Square array elements: " << std::endl;
        for (int i = 0; i < 10; i++) {
            std::cout << "[" << i << "]=" << tab[i] * tab[i] << " ";
        }
    }

};


#endif //ZJAZD3_ZAD26_H
