//
// Created by joann on 16.11.2019.
//

#ifndef ZJAZD4_FUNKCJE_H
#define ZJAZD4_FUNKCJE_H


class Funkcje {
   int data_1;
   int data2;

public:
    void suma1(){

        int a = 4;
        int b = 5;
        int sum = a + b;

        std::cout << "Wynik sumy: " <<  sum << std::endl;
    }

public:
    void suma2(int x, int y){
        int sum =0;
        sum = x + y;


        std::cout << "Wynik sumy: " <<  sum << std::endl;
    }
};


#endif //ZJAZD4_FUNKCJE_H
