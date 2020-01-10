#include <conio.h>
#include <Windows.h>
#include <iostream>


HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
const int consoleWidth = 125;
const int consoleHeight = 40;
COORD coordinates;
char sign;

//funkcja realizujaca przenoszenie kursora
void moveCursor(int x, int y) {

    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(Console, coordinates);//zapisuje

}

//funckja rozmiar konsoli
void setWindow() {
	
    SMALL_RECT rectangle;
    coordinates.X = consoleWidth;
    coordinates.Y = consoleHeight;
    rectangle.Top = 0;
    rectangle.Bottom = consoleHeight - 1;
    rectangle.Right = consoleWidth - 1;
    rectangle.Left = 0;
    
    SetConsoleScreenBufferSize(Console, coordinates);//ustawiamy widok okna 
    SetConsoleWindowInfo(Console, TRUE, &rectangle);
}

//funkcja rysowanie menu po prawej stronie
void drawMenu() {
	
    int rightMargin = 100;

    for (int i = 0; i <= consoleHeight - 1; i++) {
        moveCursor(rightMargin, i);
        std::cout << "|";
    }
    rightMargin += 1;


    moveCursor(rightMargin, 8);
    std::cout << "________________________";
    moveCursor(rightMargin, 9);
    std::cout << "    Boszka Aplikacja   ";
    moveCursor(rightMargin, 10);
    std::cout << "________________________";
    moveCursor(rightMargin, 11);
    std::cout << "                       ";
    moveCursor(rightMargin, 12);
    std::cout << "  Poruszanie: strzalki ";
    moveCursor(rightMargin, 13);
    std::cout << "  Pomniejszanie: -     ";
    moveCursor(rightMargin, 14);
    std::cout << "   Powiekszanie: +     ";
    moveCursor(rightMargin, 15);
    std::cout << "   Zmiana znaku: q     ";

}

//funkcja ukrywaj¹ca kursor
void hideCursor() {
    CONSOLE_CURSOR_INFO hCCI;
    GetConsoleCursorInfo(Console, &hCCI);//pobiera
    hCCI.bVisible = FALSE;//niewidzialny :D
    SetConsoleCursorInfo(Console, &hCCI);//hyc,zapisuje
}

//funkcja nowego znaku - ale to takie oczywiste ;)
void newSign() {
    SetConsoleTextAttribute(Console, 15);//ustawienie koloru
    moveCursor(101, 20);
    std::cout << "                        ";
    moveCursor(101, 21);
    std::cout << "   Wybierz nowy znak  ";
    moveCursor(101, 22);
    std::cout << "                        ";
    moveCursor(101, 23);
    std::cout << "                        ";
    sign = _getch();//czeka na zmiane znaku
    SetConsoleTextAttribute(Console, 15);
}

//funkcja sprawdzaj¹ca,czy mo¿na przesun¹æ literê w konsoli
bool isMovable(int x, int y, int size, int direction) {
int X;
int Y;
       if (size % 2 != 0) {


        Y = size * 7; // rozmiar litery w prawo
        X = size * 4;// rozmiar litery w dol
    } else {
        Y = size * 7 + 1; //tworzy sie rozmiar litery w prawo
        X = size * 4 + 1;//tworzy sie rozmiar litery w dol
    }

    switch (direction) {

        case 1:
            if (y <= 0) { //sprawdza czy mozna przesunac w gore
                return false;
            }
            break;
        case 2:
            if (x + X >= 99) { //sprawdza czy mozna przesunac w prawo
                return false;
            }
            break;
        case 3:
            if (y + Y >= consoleHeight - 1) { //sprawdza czy mozna przesunac w dol

                return false;
            }
            break;
        case 4:
            if (x <= 0) { //sprawdza czy mozna przesunac w lewo
                return false;
            }
            break;

    }
    return true;
}

//funkcja odpowiedzialna za powiekszenie znaku
bool isResizable(int x, int y, int size) {

    int newSize = size + 1;//sprawdza czy mo¿na powiekszyc
    int X = newSize * 4;
    int Y = newSize * 7;

    if (x + X >= 101 || y + Y >= consoleHeight ) {
        return false;
    } else {
        return true;
    }
}

// funkcja odpwiedzialna jest za rysowaie
void draw(int xx, int yy, int size) {

    int X;
    int Y;

    if (size % 2 != 0) {


        Y = size * 7; // rozmiar litery w prawo
        X = size * 4;// rozmiar litery w dol
    } else {
        Y = size * 7 + 1; //tworzy sie rozmiar litery w prawo
        X = size * 4 + 1;//tworzy sie rozmiar litery w dol
    }

    int slant = 0;

    for (int i = X; i > 0 ; i--) {

        for (int j = 0; j < Y; j++) {

            moveCursor(i + xx, j + yy); //przenosi kursor na srodek

            if (j == Y / 2 && (i == 0)) {
            	
                std::cout << sign;
            }
            if (i == X / 2) {
            	
                for (int i = slant; i < Y / 2 + slant; i++) {
                	
                    if (j == i) {
                        std::cout << sign;
                    }
                }

            }

            if (i != 0 && ((j == Y / 2 + slant) || (j == Y / 2 - slant))) {
                std::cout << sign;
            }
        }
        slant++;

    }

}

//funkcja sprz¹taj¹ca poprzednio napisany znak
void clear(int xx, int yy, int size) {

    int X;
    int Y;

    if (size % 2 != 0) {

        Y = size * 7; //tworzy sie rozmiar litery w prawo
        X = size * 4;//tworzy sie rozmiar litery w dol

    } else {
        Y = size * 7 + 1; //tworzy sie rozmiar litery w prawo
        X = size * 4 + 1;//tworzy sie rozmiar litery w dol
    }

    for (int i = X; i >0 ; i--) {
        for (int j = 0; j < Y; j++) {
            moveCursor(i + xx, j + yy);
            std::cout << " ";
        }
    }
}

int main() {

    int menu;
    int size;
    int ascii;

    do {
        std::cout << "Enter size: ";
        std::cin >> size;
        if (size < 1 || size > 18)
            std::cout << "Enter size from 1 to 18" << std::endl;

    } while (size < 1 || size > 18);

    do {
        std::cout << "Enter ASCII code: ";
        std::cin >> ascii;

        if (ascii < 33 || ascii > 255) {
            std::cout << " Enter number between 33 and 255 " << std::endl;
        }
        sign = ascii;

    } while (ascii < 33 || ascii > 255);

//czyszczenie ekranu
    system("cls");
    
    int X = 0;
    int Y = 40-7*size-1;

    if (size > 18) {
        size = 17;
    }
    if (size > 9) {
        X = 0;
        Y = 0;
    }

    setWindow();
    hideCursor();
    drawMenu();
    draw(X, Y, size);

    do {
        menu = _getch();

        switch (menu) {
            case '+': {
                int xx = size * 4;
                int yy = size * 7;

                if (isResizable(X, Y, size)) {

                    clear(X, Y, size);
                    size++;//powieksza o jeden
                    draw(X, Y, size);

                } else if (X + xx >= 100 && Y + yy >= consoleHeight - 1) {
                	
                    if (isMovable(X, Y, size, 4) &&
                        isMovable(X, Y, size, 1)) {//sprawdza czy moze przesunac sie w dol i prawo

                        clear(X, Y, size);
                        X--;
                        Y -= 2;
                        draw(X, Y, ++size);

                    }
                } else if (X + xx >= 100) { //przesunie w gore

                    if (isMovable(X, Y, size, 4)) {

                        clear(X, Y, size);
                        X--;
                        draw(X, Y, ++size);
                    }
                } else if (Y + yy >= consoleHeight - 1) {//przesunie w prawo

                    if (isMovable(X, Y, size, 1)) {
                        clear(X, Y, size);
                        Y = Y - 2;
                        draw(X, Y, ++size);
                    }
                }
                break;
            }
            case '-': {
                size--;
                if (size > 1) {
                    clear(X, Y, size + 1);
                    draw(X, Y, size);
                } else {
                    size++;
                }

                break;
            }
            case 75: //lewo
            {
                if (isMovable(X, Y, size, 4)) {

                    clear(X, Y, size);
                    X--;
                    draw(X, Y, size);

                }
                break;
            }
            case 77: //prawo
            {
                if (isMovable(X, Y, size, 2)) {
                    clear(X, Y, size);
                    X++;
                    draw(X, Y, size);

                }
                break;
            }
            case 72: //góra
            {
                if (isMovable(X, Y, size, 1)) {

                    clear(X, Y, size);
                    Y--;
                    draw(X, Y, size);
                }
                break;
            }
            case 80: //dó³
            {
                if (isMovable(X, Y, size, 3)) {

                    clear(X, Y, size);
                    Y++;
                    draw(X, Y, size);
                }
                break;
            }
            case 'q': { //zmiana znaku
                newSign();
                break;
            }
            default: {
                break;
            }
        }
    } while (menu != 27);
}
