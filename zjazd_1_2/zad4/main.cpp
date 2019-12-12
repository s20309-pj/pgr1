#include <iostream>
#include <conio.h>
#define USE_MATH_DEFINES
#include <cmath>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	cout << "podaj wielkosc kata: " << endl;
	int x;
	cin>>x;
	double y = x * (M_PI / 180);
	cout << "w radianach rowna sie: " << y;
	return 0;
}
