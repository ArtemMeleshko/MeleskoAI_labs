#include <iostream>

using namespace std;

class Transport
{
private:
    string name;
public:
    Transport(string name): name(name) {}
    Transport(const Transport &a)  = delete;
    Transport &operator=(const Transport &a)=delete;
    Transport(Transport &&a)=delete;
    Transport &operator=(const Transport &&a)=delete;
    virtual ~Transport() {}
    string getName()const{return name;}
    virtual int cost(double way)const=0;
    virtual double time(double way)const=0;

};

class Fly:public Transport
{
private:
    int prise;//rub/km
    int speed;//km/ch
public:
    Fly (string name,int a,int b):Transport(name),prise(a),speed(b)
    {
    }
    int cost(double way)const override
    {
        if (way <= 500)
            return prise*way*2;
        else
            return prise*way;
    }
    double time(double way)const override
    {
        double hour;
        hour=way/speed;
        return hour;
    }

};

class Realway:public Transport
{
private:
    int prise;//rub/km
    int speed;//km/ch
public:
    Realway(string name ,int a,int b):Transport(name),prise(a),speed(b)
    {

    }
    int cost(double way)const override
    {
        return prise*way;
    }
    double time(double way)const override
    {
        double hour;
        hour=way/speed;
        return hour;
    }
};

class Bus:public Transport
{
private:
    int prise;//rub/km
    int speed;//km/ch
public:
    Bus (string name ,int a,int b):Transport(name),prise(a),speed(b)
    {
    }
    int cost(double way)const override
    {

        int costhostel(5);
        int sum(0);
        if ( way/speed > 17)


         sum = way*prise+5;

        else
            sum = way*prise;
            return sum;
    }
    double time(double way)const override
    {
        double hour;
        if (hour > 17)
            hour = way/speed + 2;
        else
            hour=way/speed;
        return hour;
    }
};


int main()
{
   Transport **a ;
   a =  new Transport *[6];
   a[0] = new Fly("Boing 000 ", 100 , 600);
   a[1] = new Fly("Boing 666 ", 145 , 720);
   a[2] = new Realway("Lokomativ ", 25 , 60);
   a[3] = new Realway("Electric ", 35 , 80);
   a[4] = new Bus("Mersedes ", 76 , 90);
   a[5] = new Bus("Ford ", 80 , 100);
   int n;
   cin >> n;
   for (int i = 0; i<6 ; i++)
    cout << a[i]->getName() << "\n" << " Price :"<< a[i]->cost(n)<< endl<< " Time :" << a[i]->time (n)<< " " << endl;
}
