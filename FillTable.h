#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#ifndef ZJAZD3_FILLTABLE_H
#define ZJAZD3_FILLTABLE_H


class FillTable {

    int a;
    int b;
    int sizeOfArray;
    int chosenElement;


public:
    void instructions() {
        std::cout << "Enter the size of the array. <=100" << std::endl;
        std::cin >> sizeOfArray;

        if (sizeOfArray > 100) {
            std::cout << "Given size is too large. Enter a number less or equal than 100: " << std::endl;
        } else
            std::cout << "Enter the beginning of the range (0-100)" << std::endl;
        std::cin >> a;

        std::cout << "Enter the end of the range (0-100)" << std::endl;
        std::cin >> b;

        std::cout << "Array:  " << std::endl;

        int count = howMany();
        std::cout << "Number of chosen element: " << count << std::endl;

    }

public:
    int howMany() {

        int tab[sizeOfArray];
        srand(time(NULL));

        for (int i = 0; i < sizeOfArray; i++) {
            tab[i] = (rand() % (b - a + 1) + a);
            std::cout << "tab[" << i << "]= " << tab[i] << std::endl;
        }

        std::cout << "Enter element to find: " << std::endl;
        std::cin >> chosenElement;

        int count = 0;
        for (int i = 0; i <= sizeOfArray - 1; i++) {
            if (tab[i] == chosenElement) {
                count++;
            }
        }
        return count;
    }
};


#endif //ZJAZD3_FILLTABLE_H
