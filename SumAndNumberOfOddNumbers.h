#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

#ifndef ZJAZD3_SUMANDNUMBEROFODDNUMBERS_H
#define ZJAZD3_SUMANDNUMBEROFODDNUMBERS_H


class SumAndNumberOfOddNumbers {

    int a;
    int b;
    int sizeOfArray;


public:
    void fillTable(){
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
        int odd = countOddNumbers();

    }

public:
     int countOddNumbers(){
         int tab[sizeOfArray];
         srand(time(NULL));

         for (int i = 0; i < sizeOfArray; i++) {
             tab[i] = (rand() % (b - a + 1) + a);
             std::cout << "tab[" << i << "]= " << tab[i] << std::endl;
         }


             int count =0;
             int howMany =0;
             for (int i = 0; i <= sizeOfArray - 1; i++) {
                 if ( (tab[i] % 2) !=0  ) {
                     count += tab[i];
                     howMany++;
                 }
             }
             std::cout<<"Number of odd numbers: " << howMany << std::endl;
             std::cout<<"Sum of odd numbers:  " << count << std::endl;
          return count;
         }


};


#endif //ZJAZD3_SUMANDNUMBEROFODDNUMBERS_H
