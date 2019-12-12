#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand ((int) time(NULL));

    int suma =0;
    int ilosc =0;
    for(int i = 0; i < 10; i++){

       int los = rand() % 100+1;
       if( los % 2 ==0){
          suma  = suma + los;
          ilosc = ilosc +1;
       }

    }
 cout << "suma parzystych: " << suma << endl;
 cout << "ilosc  parzystych: " << ilosc << endl;

    return 0;

}
