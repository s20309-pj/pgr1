

#ifndef ZJAZD3_TABLICADYNAMICZNA_H
#define ZJAZD3_TABLICADYNAMICZNA_H


class TablicaDynamiczna {

public:
    int *max(int *wsk, int n) {
        int *max = wsk;

        for (int i = 0; i < n; i++) {
            if (*wsk > *max) {
                max = wsk;
            }
            wsk++;
        }

        return max;
    }

public:
    int *min(int *wsk, int n) {
        int *min = wsk;

        for (int i = 0; i < n; i++) {
            if (*wsk < *min) {
                min = wsk;
            }
            wsk++;
        }

        return min;
    }


};


#endif //ZJAZD3_TABLICADYNAMICZNA_H
