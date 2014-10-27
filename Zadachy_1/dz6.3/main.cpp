#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   int w,h;
    cin >>w;
    cin >>h;
    for (int i = 1; i <= w; ++i)
        {for (int j = 1; j <= h; ++j)
        {
             if ((i==1) || (j==1) || (i==h) || (j==w))
                cout<<"#";

        else
            cout << " ";
        }
        cout << endl;
        }
    return 0;
}

