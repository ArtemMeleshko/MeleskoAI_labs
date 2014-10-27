#include <iostream>

using namespace std;

int main()
{

    int n , t;

    cin >> n;
    if ( n >=1 )
    {
        cout << "Enter "<< n << " numbers \n";
        cin >> t ;
        int min = t , max = t;
        for ( int i = 1; i < n; i++)
        {
             cin >> t;
             max = t > max ? t : max;
             min = t < min ? t : min;
         } cout << "Min: " << min << "; Max: " << max << ";\n";

            }
       else
        cout << "Error";

    return 0;
}
