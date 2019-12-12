#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>


#ifndef ZJAZD4_TAB5X5_H
#define ZJAZD4_TAB5X5_H


class tab5x5 {

public:

  void table() {

      int tab[5][5];
      int max = 0;
      int index = 0;
      srand(time(NULL));

      for (int i = 0; i < 5; i++) {
          for (int j = 0; j < 5; j++) {
              tab[i][j] = rand() % 100 + 1;
              if (tab[i][j] > max) {
                  max = tab[i][j];
              }
          }
      }
      for (int i = 0; i < 5; i++) {
          for (int j = 0; j < 5; j++) {
              std::cout << tab[i][j] << ", ";
          }
          std::cout<<std::endl;


      }
      std::cout << max << std::endl;
  }
};


#endif //ZJAZD4_TAB5X5_H
