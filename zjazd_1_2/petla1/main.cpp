#include <iostream>

using namespace std;

int main()
{

   for(int i=0; i < 7; i++){
    cout << i +1  << "Witaj" << endl;
   }


   int z = 0;
   int suma=0;
   do {

    cout<< z+1 << "Witaj"  << endl;
     z++;
   } while ( z <= 7 );


    while ( z < 7){
        cout << z+1 << "hello"  << endl;
        z++;

    }

   cout << "modulo" << endl;
    int count =0;
    for (int i =100; i < 1000; i++){

            if(i % 13 ==0){
                 count++;
                 cout << "nr. " << count << " " << i << endl;
                 suma += i;
            }

    }

    cout << "suma wszystkich liczb: " << suma << " " << endl;

    return 0;
}
