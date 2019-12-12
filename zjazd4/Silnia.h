
#ifndef ZJAZD4_SILNIA_H
#define ZJAZD4_SILNIA_H


class Silnia {

public:
    int silnia(int n) {

        int silnia = 1;
            if (n < 2) {
                return 1;
            } else {
                for (int i = n; i <= n ; i++) {
                silnia *= i;
            }
            return silnia;
        }

    }

public:
    int silniaRecursion(int n){

        if(n<2) {
            return 1;
        } else {
        return n*silnia(n-1);
       }
    }


public:
    int dodawanie(int n){

        if(n < 1)
            return n + dodawanie(n - 1);
        return 0;
    }

};


#endif //ZJAZD4_SILNIA_H
