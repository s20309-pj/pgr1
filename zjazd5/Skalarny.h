#ifndef ZJAZD3_SKALARNY_H
#define ZJAZD3_SKALARNY_H


class Skalarny {

public:
    int skalarny(int n, int tab1[], int tab2[]) {

        int skalar = 1;

        for (int i = 0; i <= n; i++) {
            skalar += tab1[i] * tab2[i];
        }


        return skalar;
    }

};


#endif //ZJAZD3_SKALARNY_H
