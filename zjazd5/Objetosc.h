

#ifndef ZJAZD3_OBJETOSC_H
#define ZJAZD3_OBJETOSC_H


class Objetosc {

public:
    float rectangle(float dlug, float szer, float wys, float &objetosc)
    {
        if (dlug && szer && wys){

            objetosc = dlug * szer * wys;

            return (2 * dlug * szer) + (2 * dlug * wys) + (2 * szer * wys);
        } else {
            objetosc = -1;
            return -1;
        }
    }
};


#endif //ZJAZD3_OBJETOSC_H
