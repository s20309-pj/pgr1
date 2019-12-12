//
// Created by joann on 16.11.2019.
//

#ifndef ZJAZD4_SWAPPING_H
#define ZJAZD4_SWAPPING_H


class Swapping {

public:
    void swap(int a, int b){

        a = a - b;
        b = b + a;
        a = b - a;

        std::cout << "A = " << a << std::endl;
        std::cout << "B = " << b << std::endl;
    }


};


#endif //ZJAZD4_SWAPPING_H
