//
// Created by joann on 16.11.2019.
//

#ifndef ZJAZD4_CALCULATOR_H
#define ZJAZD4_CALCULATOR_H


class Calculator {
//
//    cout << "[1] dodawanie\n";
//    cout << "[2] odejmowanie\n";
//    cout << "[3] mnozenie\n";
//    cout << "[4] dzielenie\n";

public:
    int sum(float a, float b){
     int sum = a+b;

  return sum;

    }
public:
    int divide(float a, float b){
      int divideScore;
      if(b!=0){
         divideScore = a/b;
      }

return divideScore;

    }
public:
    int multi(float a, float b){
    int multiScore = a*b;
    return multiScore;

    }
public:
    int sub(float a, float b) {
        int subScore = a - b;
        return subScore;
    }

};


#endif //ZJAZD4_CALCULATOR_H
