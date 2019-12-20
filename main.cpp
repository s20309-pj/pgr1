#include <iostream>
#include <conio.h>
#include <cmath>
#include <time.h>
#include "zjazd5/Wskazniki.h"
#include "zjazd5/WskaznikiNaZmienne.h"
#include "zjazd5/Objetosc.h"
#include "zjazd5/TablicaDynamiczna.h"
#include "zjazd5/Skalarny.h"
#include "zjazd5/Zadanie30.h"
#include "zjazd5/Zadanie32.h"
#include "zjazd5/Zadanie33.h"
#include "zjazd5/Zadanie44.h"

//float F(float a, float b);
//float exponentation(float a, float b);
//bool prime(int n);


int main() {
    int a[] = {1, 2, 3, 4, 5, 66};



    //WSKAZNIKI
    Wskazniki wskazniki;
    wskazniki.fuk_tab(a, 6);
    wskazniki.fun_wsk1(a, 6);
    wskazniki.fun_wsk2(a, 6);


    //Wskazniki Na Zmienne
    WskaznikiNaZmienne wskaznikiNaZmienne;
    wskaznikiNaZmienne.wskaNazienne();


    //Objetosc

    Objetosc objetosc1;

    float length;
    float width;
    float height;
    std::cout << std::endl;
    std::cout << "Podaj dlugosc, szeroskosc, wysokosc: " << std::endl;
    std::cin >> length >> width >> height;

    float objetosc = 0;

    std::cout << "Pole: " << objetosc1.rectangle(length, width, height, objetosc) << std::endl << "Objetosc: " << objetosc;
    std::cout << std::endl;

    //Tablica Dynamiczna
    TablicaDynamiczna tablicaDynamiczna;

    int tab[] = {2, 5, 6, 2, 3, 2, 2, 0, 1, 0};
    const int n = 10;

    int *maxElement = tablicaDynamiczna.max(tab, n);
    int *minElement = tablicaDynamiczna.min(tab, n);

    float count = 0;

    float sum = 0;

    if (maxElement > minElement) {
        int *temp = maxElement;
        maxElement = minElement;
        minElement = temp;
    }

    while (maxElement <= minElement) {
        sum += *maxElement;
        maxElement++;
        count++;
    }

    std::cout << sum / count;

//SKALARNY
    Skalarny skalarny2;

    int k = 3;

    int tabX[3] = {1, 2, 3};
    int tabY[3] = {4, 5, 6};


    std::cout << std::endl;
    std::cout << "wynik: " << skalarny2.skalarny(k, tabX, tabY) << std::endl;

    //zadanie30

    Zadanie30 zadanie30;

    float x;
    float result;

    std::cout << "Enter x: ";
    std::cin >> x;

    result = sqrt(sqrt(x * x + (x + 3) * (x + 3))) + 5 * sqrt(sqrt((3 * x) * (3 * x) + 100));

    std::cout << "The value is:  " << result << std::endl;
    std::cout << "Function F: " << zadanie30.F(x, result);

    //Zadanie32

    Zadanie32 zadanie32;

    float h;
    float b;
    float c;
    float d;

    std::cout << "Enter h: ";
    std::cin >> h;

    std::cout << std::endl << "Enter b: ";
    std::cin >> b;

    std::cout << std::endl << "Enter c: ";
    std::cin >> c;

    std::cout << std::endl << "Enter d: ";
    std::cin >> d;

    std::cout << std::endl << "The result is: ";
    std::cout << (zadanie32.exponentation(h, n) + zadanie32.exponentation(b, n + 5)) /
                 zadanie32.exponentation(c, 2 * n + 1);
    std::cout << std::endl;

    //Zadanie33

    Zadanie33 zadanie33;

    int p;
    std::cout << "Enter the number: ";
    std::cin >> p;
    int counter = 0;

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                counter++;
            }
        }
        if (counter == 2) {
            std::cout << i << " ";
        }
        counter = 0;
    }


    std::cout << std::endl << "Is the given number a prime number?( 0 - false, 1 - true): " << zadanie33.prime(p);


    //Zadanie44
    Zadanie44 zadanie44;
    float tablica[10];

    srand((int) time(NULL));
    for (int i = 0; i < 10; i++) {
        tablica[i] = rand() % 10 + 1;
    }
    std::cout << "Liczby: ";
    for (int i = 0; i < 10; i++) {
        std::cout << tablica[i] << " ";
    }
    zadanie44.MinMax(tablica);
    std::cout << std::endl << "Numbers between min & max: " << std::endl;
    zadanie44.average(tablica);


    _getch();
    return 0;
};