#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int n =0;
int los =0;

int main()
{
    srand ((int) time(NULL));
    los = rand() % 100+1;

     do {
         cout << "podaj liczbe z przedzialu 1-100 " << endl;
             cin >> n;

        if( n > los){
            cout << "podana liczba jest za duża " << endl;
        }
         if ( n < los){
        cout << "podana liczba jest za mala " << endl;
        }
     }
    while ( n!= los);

   cout << "zgadles" << endl;
    return 0;
}
