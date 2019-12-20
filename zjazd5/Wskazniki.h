

#ifndef ZJAZD5_WSKAZNIKI_H
#define ZJAZD5_WSKAZNIKI_H


class Wskazniki {


public:
    void fuk_tab(int tab[], int n) {
        for (int i = 0; i < n; i++) {
            std::cout << tab[i] << "\t";
            std::cout << std::endl;
        }
    }

public:
    void fun_wsk1(int *wsk, int n) {
        for (int i = 0; i < n; i++) {
            std::cout << wsk[i] << "\t";
            std::cout << std::endl;
        }
    }

public:
    void fun_wsk2(int *wsk, int n) {
        for (int i = 0; i < n; i++) {
            std::cout << *(wsk++) << "\t";
            std::cout << std::endl;
        }
    }

};


#endif //ZJAZD5_WSKAZNIKI_H
