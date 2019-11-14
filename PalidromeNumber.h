#ifndef ZJAZD3_PALIDROMENUMBER_H
#define ZJAZD3_PALIDROMENUMBER_H


class PalidromeNumber {

public:

    void checkIfNumberIsPalidrome(){

        int palindrome;
        int reversedNumber = 0;
        printf( "Enter number:  ");
        std::cin >> palindrome;

        int number = 0;
        int key = palindrome;
        for (int i=1 ; palindrome!=0; i++){

            number = palindrome % 10;
            palindrome = palindrome / 10;
            reversedNumber = number + (reversedNumber * 10);
        }

        if(reversedNumber == key){
            std::cout << key << " is a palindrome number";
        }
        else {
            std::cout << key << " is not a palindrome number";
        }
    }

};


#endif //ZJAZD3_PALIDROMENUMBER_H
