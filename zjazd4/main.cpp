#include <iostream>
#include <conio.h>
#include "tab5x5.h"
#include "tab5x5.h"
#include "choinka.h"
#include "Swapping.h"
#include "FunckjaWartosc.h"
#include "Silnia.h"
#include "Multiplication.h"
#include "Calculator.h"
#include "ArrayToFunction.h"
#include "Funkcje.h"

int main() {
    std::cout << "Tablica" << std::endl;

//    int tab [4][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//    for (int i =0; i < 4; i++){
//        for(int j = 0; j < 4; j++){
//            std::cout << tab[i][j] << ", ";
//        }
//        std::cout <<std::endl;
//    }

    tab5x5 tab5X5;
    tab5X5.table();
//    choinka ch;
//    ch.draw();
//    Funkcje f;
//    f.suma1();
//    f.suma2(3,4);

//     int a, b;
//    std::cout << "podaj liczbę a: " << std::endl;
//    std::cin >> a;
//    std::cout << "podaj liczbę b: " << std::endl;
//    std::cin >> b;
//
//    f.suma2(a,b);

//    Multiplication multi;
//
//    multi.multi();
//    multi.multi2(3,3);
//    multi.multi3();
//    std::cout << "Multi number 4: " << multi.multi4(6,6);

//    Calculator calculator;
//    std::cout << "Sum: " <<  calculator.sum(4,4.5);
//    std::cout<<std::endl;
//    std::cout<< "Division: " <<  calculator.divide(5,5);
//    std::cout<<std::endl;
//    std::cout<< "Sub: " <<  calculator.sub(4,4);
//    std::cout<<std::endl;
//    std::cout<< "Multi: " <<  calculator.multi(4,4.5);5
//    ArrayToFunction arrayToFunction;
//    arrayToFunction.arrayTable({{1,2,3,4},{5,6,7,8},{9,8,7,6},{3,4,5,6},{1,2,3,4}});

//    Swapping swapping;
//    swapping.swap(15,5);
//    FunckjaWartosc funckjaWartosc;
//    int a = 55;
//    int b = 100;
//    funckjaWartosc.zmien(a,b);
//    funckjaWartosc.zmien2(a,b);

    Silnia silnia;
   std::cout << "Silnia = " << silnia.silnia(5);
   std::cout << silnia.silniaRecursion(4);

    _getch();
    return 0;
}