#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

float a;
float b;
float wynik;
int wybor;


int main() {
	
	
	cout << "\tKalkulator \n";
	cout << "----------------------";
	cout << endl;
	cout << "Podaj pierwsza liczbe: \n" << endl;
	cin >> a;
	cout << "Podaj druga liczbe: " << endl;
	cin >> b;
	cout << "Wybierz dzialanie: \n"; 
	cout << "1. Dodawanie \n";
	cout << "2. Odejmowanie \n";
	cout << "3. Mnozenie \n";
	cout << "4. Dzielenie \n";
	cout << "0. Wyjscie \n";
	cout << "Twoj wybor:  ";
	cout << "Twoj wybor: ";
	cin >> wybor;
	
	if(wybor == 1) {
	   cout <<  a + b;
	   
	} else if (wybor == 2){
	  cout <<	 a-b;
	  
	} else if(wybor == 3){
	  cout << a*b;
	  
	} else if (wybor == 4){
		wynik = a/b;
	 //cout << a/b;
	 if(b != 0){
	 	cout << a << " / " << b << " = " << wynik << endl;
	 } else {
	 	cout << "Nie dizelimy przez 0" << endl;
	 	cout << "podaj liczbe jeszcze raz" << endl;
	 	cin >> b;
	 	wynik = a/b;
	 	cout<< a << "/" << b << "= " << wynik << endl;
	 }
    }
    if(wybor ==0){
    	cout << "Dzieki za prace";
	}

	
	_getch();
	return 0;
}
