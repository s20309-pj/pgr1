#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	cout << "podaj liczbe: " << endl;
	int x;
	cin >> x;
	cout << "podaj druga liczbe: " << endl;
	int y;
	cin >> y;
	cout << "podaj trzecia liczbe: " << endl;
	int z;
	cin >> z;
	int max=x;
	if(y > max ){
		max =y;
		if (max < z){
			max =z;
		}
	}

	cout << " najwieksza liczba to: " << max;
	
	
	
	
	
	_getch();
	return 0;
}
