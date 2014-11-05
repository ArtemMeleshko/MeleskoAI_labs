#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;


int main()
{
    int n, i(2);

    cout << "Enter n  >=  2 : ";
    cin >> n;
    while ( i <= sqrt(n))
        if ( n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
        else
            i = i + 1;
    cout << n;

    return 0;
}
