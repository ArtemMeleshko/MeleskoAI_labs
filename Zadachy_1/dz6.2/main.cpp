#include <iostream>

using namespace std;
 int NOD(int a , int b)
  {
      //int a , b;
        while (a!=b)
        {if (a>b)
         a -=b;
        else
        b -=a;}
       // cout << "NOD "<< a << endl;
       return a;
  }

  int NOK(int a , int b)
  {//int a , b;
    return  a * b / NOD(a,b);
  }
int main()
{
    int NOD();
    int NOK();
    int a , b ;
    cout << "Enter a b" << endl;
    cin >> a >> b;
    cout << NOD(a,b) <<" " << NOK (a,b);
    return 0;


}





