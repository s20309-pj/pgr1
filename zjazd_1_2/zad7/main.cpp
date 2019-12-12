#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	
	cout << "podaj liczbe: ";
	int x;
	cin >> x;
	cout << "podaj druga liczbe:";
	int y;
	cin >> y;
	double wynik;
	if(x > 0 && y > 0){
	 wynik = x + y;
		cout << "wynik :" << wynik;
	} else {
		cout << "liczba musi byc wieksza od 0";
	}
	 

	return 0;
}
