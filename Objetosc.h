//
// Created by joann on 30.11.2019.
//

#ifndef ZJAZD3_OBJETOSC_H
#define ZJAZD3_OBJETOSC_H


class Objetosc {


public:
    float prost(float dlugosc, float szer, float wys,float  &objetosc){
        objetosc = dlugosc*szer*wys;
         return  2*(dlugosc*szer + dlugosc*wys + szer*wys);
    }

};


#endif //ZJAZD3_OBJETOSC_H
