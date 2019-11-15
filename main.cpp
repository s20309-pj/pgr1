#include <iostream>
#include "PalidromeVersionTwo.h"
#include "PalidromeNumber.h"
#include "Palidrome.h"
#include "DrawingRectangle.h"
#include "FillTable.h"
#include "SumAndNumberOfOddNumbers.h"


int main() {
    std::cout << "Numero 3" << std::endl;

    Palidrome palidrome;
    PalidromeVersionTwo palidromeVersionTwo;
    PalidromeNumber palidromeNumber;
    DrawingRectangle drawingRectangle;
    palidrome.checkIfStringIsPalindrome();
    std::cout << std::endl;
    palidromeVersionTwo.checkIfStringIsPalindromeTwo("KajaK");
    std::cout << std::endl;
    palidromeNumber.checkIfNumberIsPalidrome();
    std::cout << std::endl;
    drawingRectangle.drawRectangle(10, 10);
    std::cout << std::endl;
    FillTable fillTable;
    fillTable.instructions();
    std::cout << std::endl;
    SumAndNumberOfOddNumbers sumAndNumberOfOddNumbers;
    sumAndNumberOfOddNumbers.fillTable();


    _getch();
    return 0;
}