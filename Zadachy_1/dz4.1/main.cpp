#include <iostream>

using namespace std;

int main()
{
    int n,t;
    int result = 1 ;
    cout << "Enter n \n";
    cin >> n;
    cout << "Enter n numbers \n" << endl;
    cin >> t;
    for ( int i = 1 ; i < n; i++)
    {
        cin >> t;
        result = result * t;


    }
    cout << result;
    return 0;
}
