#include <iostream>

using namespace std;

int main()
{
    cout << "podaj liczbe " << endl;

    int n=0;
    cin>> n;

    int wynik = 0;

    for (int i =1; i < n; i++){
      wynik += i*i;
    }

    cout <<
    "wynik to: " << wynik << endl;
    return 0;
}
