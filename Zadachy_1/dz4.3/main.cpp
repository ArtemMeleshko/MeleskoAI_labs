#include <iostream>

using namespace std;

int main()
{
    int   L, x;
    int p(-1),n(1);
    cout << "Enter L and x ";
    cin >> L;
    cin >> x;
    while(L > n)
    {

        n = n * x;
        p++;

    }
    cout<<"Our degree "<<p;


    return 0;
}
