

#ifndef ZJAZD3_ZADANIE33_H
#define ZJAZD3_ZADANIE33_H


class Zadanie33 {

public:
    bool prime(int n) {
        int counter = 1;

        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                counter++;
            }
        }

        if (counter < 3) {
            return true;
        } else {
            return false;
        }
    }

};


#endif //ZJAZD3_ZADANIE33_H
