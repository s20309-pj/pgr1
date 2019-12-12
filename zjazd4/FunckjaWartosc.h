//
// Created by joann on 16.11.2019.
//

#ifndef ZJAZD4_FUNCKJAWARTOSC_H
#define ZJAZD4_FUNCKJAWARTOSC_H


class FunckjaWartosc {

public:
    void zmien(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        std::cout << "a = " << a << " b = " << b << std::endl;

    }

public:
    void zmien2(int &a, int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        std::cout << "a = " << a << " b = " << b << std::endl;
    }

};


#endif //ZJAZD4_FUNCKJAWARTOSC_H
