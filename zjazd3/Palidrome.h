#ifndef ZJAZD3_PALIDROME_H
#define ZJAZD3_PALIDROME_H


class Palidrome {

public:

    void checkIfStringIsPalindrome() {
        std::string inputString;
        printf("Type a word: ");
        std::cin >> inputString;
        int i = 0;
        int j = inputString.length() - 1;

        while (i < j) {
            if (inputString[i] != inputString[j]) {
                std::cout << "String " + inputString + " is not a palidrome";
                return;
            }
            i++;
            j--;
        }
        std::cout << "String " + inputString + " is palidrome";
    }
};


#endif //ZJAZD3_PALIDROME_H
