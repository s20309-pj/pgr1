#include <iostream>

using namespace std;

int main()
{

    int suma =0;
    int a;
    int i =0;



    while(i < 10){
     cout << "podaj zmienną" << endl;
       cin >> a;
        suma += a;
        i++;
    }



    cout << "suma to: " << suma <<  endl;



    return 0;
}
