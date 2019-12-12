#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#ifndef ZJAZD3_MINARRAYELEMENT_H
#define ZJAZD3_MINARRAYELEMENT_H


class MinArrayElement {

    int a;
    int b;
    int sizeOfArray;


public:
    void fillTable() {
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
        int min = firstMinElement();

    }

public:
    int firstMinElement() {

        int tab[sizeOfArray];
        srand(time(NULL));

        for (int i = 0; i < sizeOfArray; i++) {
            tab[i] = (rand() % (b - a + 1) + a);
            std::cout << "tab[" << i << "]= " << tab[i] << std::endl;
        }

        int min = tab[0];
        int index = 0;
        for (int i = 0; i <= sizeOfArray - 1; i++) {
            if (tab[i] < min) {
                min = tab[i];
                if (tab[i] = min) {
                    index = i;
                }
            }

        }
        std::cout << "Minimum element in array: " << min << std::endl;
        std::cout << "Index of minimum element:  " << index << std::endl;

        return min;
    }
};


#endif //ZJAZD3_MINARRAYELEMENT_H
