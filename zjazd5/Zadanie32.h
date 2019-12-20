
#ifndef ZJAZD3_ZADANIE32_H
#define ZJAZD3_ZADANIE32_H


class Zadanie32 {

public:

    float exponentation(float a, float b) {
        float result = 1;
        for (int i = 0; i < b; i++) {
            result *= a;
        }
        return result;
    }

};


#endif //ZJAZD3_ZADANIE32_H
