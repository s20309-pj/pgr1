#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#ifndef ZJAZD4_CHOINKA_H
#define ZJAZD4_CHOINKA_H


class choinka {

public:
    void draw() {
        int h;
        std::cout << "Type height: ";

        std::cin >> h;
        std::cout << std::endl;

        for (int i = 1; i <= h - 1; i++) {
            for (int k = 1; k <= h - i - 1; k++) {
                std::cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        for (int root = 1; root <= h - 2; root++) {
            std::cout << " ";
        }
        std::cout << "#";
        char sign;
        std::cin >> sign;
    }

};


#endif //ZJAZD4_CHOINKA_H
