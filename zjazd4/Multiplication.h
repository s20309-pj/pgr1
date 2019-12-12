
#ifndef ZJAZD4_MULTIPLICATION_H
#define ZJAZD4_MULTIPLICATION_H


class Multiplication {

public:
    void multi() {
        int hopsasa = 5;
        int doLasa = 8;
        int score = hopsasa * doLasa;
        std::cout << "Score of multiplication: " << score << std::endl;
    }

public :
    void multi2(int hopsasa, int doLasa) {
        int score2 = hopsasa * doLasa;

        std::cout << "Score of multiplication: " << score2 << std::endl;
    }

public:
    int multi3() {

        int hopsasa = 10;
        int doLasa = 10;
        int score = hopsasa * doLasa;
        std::cout << score << std::endl;
        return score;
    }

public:
    int multi4(int hopsasa, int doLasa) {
        int score = hopsasa * doLasa;
        return score;
    }

};


#endif //ZJAZD4_MULTIPLICATION_H
