#ifndef ZJAZD3_PALIDROMEVERSIONTWO_H
#define ZJAZD3_PALIDROMEVERSIONTWO_H


class PalidromeVersionTwo {

public:

    void checkIfStringIsPalindromeTwo(std::string inputString) {

        int i = 0;
        int j = inputString.length() - 1;

        while (i < j){
            if (inputString[i] != inputString[j]){
                std::cout<< "String " + inputString + " is not a palidrome";
                return;
            }
            i++;
            j--;
        }
        std::cout<< "String " + inputString + " is palidrome";
    }
};


#endif //ZJAZD3_PALIDROMEVERSIONTWO_H
