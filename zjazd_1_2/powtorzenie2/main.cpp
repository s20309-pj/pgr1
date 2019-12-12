#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

float number, degree;

int main()
{
    cout << "Wprowadz liczbe: ";
    cin >> number;
    cout << "wprowadz stopien pierwiastka: ";
    cin >> degree;

    cout << pow(number, 1/degree);

    return 0;
}
