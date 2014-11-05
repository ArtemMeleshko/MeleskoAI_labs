#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()




{
   int i ;
    cout << "Enter i >= 2 < 100 : ";
    cin >> i;
    if( i == 4 || i == 6)
        cout << "Not Simple !!! ";

    if ( i >= 8)
    {
        if((i %  2) != 0 && (i % 3) != 0 && (i % 5) != 0 && (i % 7) != 0)
            cout  <<"Simple " ;
        else
            cout << "Not simple ";
    }
    else if ( i <= 8)
    {

        if((i / 2) == 1 || (i / 3) == 1 || (i / 5) == 1 || (i / 7) == 1)
            cout << "Simple ";
        else
            cout << " not simple ";
    }




    return 0;
}
