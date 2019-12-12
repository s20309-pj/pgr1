
#ifndef ZJAZD4_ARRAYTOFUNCTION_H
#define ZJAZD4_ARRAYTOFUNCTION_H


class ArrayToFunction {

public:
    int arrayTable(int hopsa [4][5]){

        int total=0;
        for(int i =0; i < 4; i++){
            for (int j =0; j < 4; j++){
                total+= hopsa[i][j];
            }
        }
        return total;

    }

};


#endif //ZJAZD4_ARRAYTOFUNCTION_H
