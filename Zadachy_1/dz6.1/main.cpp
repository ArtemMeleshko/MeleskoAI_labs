#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter  a b"<< endl;
    cin >> a >> b;
    while (a && b)
        if (a >= b)
            a %= b;
        else
            b %= a;
    return a | b;

}
