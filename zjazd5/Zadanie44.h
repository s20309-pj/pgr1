
#ifndef ZJAZD3_ZADANIE44_H
#define ZJAZD3_ZADANIE44_H


#include <iostream>

class Zadanie44 {

    int minimum = 0;
    int maximum = 0;

public:
    void MinMax(float tablica[10]) {
        int min = 10;
        int max = 0;

        for (int i = 0; i < 10; i++) {
            if (tablica[i] < min) {
                min = tablica[i];
                minimum = i;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (tablica[i] > max) {
                max = tablica[i];
                maximum = i;
            }
        }
        std::cout << std::endl;
        std::cout << "Minimum: " << min << "  " << "Index:[" << minimum + 1 << "]" << std::endl;
        std::cout << "Maximum: " << max << "  " << "Index:[" << maximum + 1 << "]" << std::endl;

    }

    void average(float *tablica) {
        float sum = 0;
        float average = 0;
        float count = 0;

        if (minimum < maximum) {
            for (int i = minimum; i <= maximum; i++) {
                std::cout << tablica[i] << " ";
                sum = sum + tablica[i];
                count++;
            }
        } else if (minimum > maximum) {
            for (int i = maximum; i <= minimum; i++) {
                std::cout << tablica[i] << " ";
                sum = sum + tablica[i];
                count++;
            }
        }
        average = sum / count;
        std::cout << std::endl << std::endl;
        std::cout << "suma wynosi: " << sum << std::endl;
        std::cout << "average wynosi: " << average << std::endl;

    }
};


#endif //ZJAZD3_ZADANIE44_H
