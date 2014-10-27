#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int h,r;
    float l;
    double v, S;
    double pi=3.14159265358979323846;
    cout << "Введите радиус и выоту \n";
    cin >> r >> h;
    v =  (pow(r,2) * h * pi )/3 ;
    cout << "Объем = ";
    printf( "%.2f", v );
    cout << endl;



    l = sqrt(pow(r,2)+pow(h,2));

    cout << "Площадь = ";
    S = pi*r*r + pi*r*l;
    printf( "%.3f", S );

    return 0;
}
