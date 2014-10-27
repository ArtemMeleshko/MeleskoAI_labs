#include <iostream>

using namespace std;

int main()
{
    int n,t ;
    int    a1=0;
    int    a2=1;
    cout << "Enter n \n";
    cin >> n;
    cout << "Fib " << n << " numbers \n";
    for ( int i = 0; i < n ; i++)
    {
         t = a1 + a2;
         a1 = a2;
         a2 = t;
         cout << t << "\n";
    }

    return 0;
}
