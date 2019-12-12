#include <iostream>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
     //  std::cout <<  "witaj Asiu";
    //	cout <<  "witaj Asiu" << endl;
  
	int zmienna1;
	char zmienna2;
	float zmienna3;
	string zmienna4;
	
	cout << "int " << sizeof(zmienna1) << endl;
	cout << "char " << sizeof(zmienna2) << endl;
	cout << "float " << sizeof(zmienna3) << endl;
	cout << "string " << sizeof(zmienna4) << endl;
	
	cout << "adres int = " << &zmienna1 << endl;   
	
	_getch();
	return 0;
}
