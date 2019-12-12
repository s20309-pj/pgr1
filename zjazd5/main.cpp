#include <iostream>
#include <conio.h>
#include "Wskazniki.h"

void fun_tab(int n, int tab[]){
    for (int i=0; i < n; i++){
        std::cout << tab[i] << "\t";
        std::cout << std::endl;
    }
}

void fun_wsk1(int n, int * wsk){
    for (int i =0; i <n; i++){
        std:std::cout << wsk[i] << "\t";
        std::cout << std::endl;
    }
}

void fun_wsk2(int n, int * wsk){
    for(int i =0; i <n; i++){
        std::cout << * (wsk + i) << "\t";
        std::cout << std::endl;
    }
}



int main() {
     int a [] = {5,2,6,3,2,1,3,5};
     int n = 8;
//     fun_tab(n,a);
//     fun_wsk1();
//     fun_wsk2();
//    int zmie1;
//    int zmien2 = 4;
//
//    int *wsk1;   // wskaźnik
//    int *wsk2 = &zmie1;
//
//    zmien2=444;
//
//    std::cout << "zmienna: " << zmien2 << std::endl;
//    std::cout << "wskaźnik: " << wsk2 << std::endl;
//    std::cout << std::endl;
//    std::cout << "Wartosc zmiennej: " << zmien2 << std::endl;
//    std::cout << "Wartosc wskaźnika: " << *wsk2 << std::endl;



    Wskazniki wskazniki;
   std::cout <<  wskazniki.fuk_tab(5,2,6)


    _getch();
    return 0;
}