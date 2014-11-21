// TODO Арцём у вас атрымалася не зусім тое, а б чым я прасіў, таму вам велмі шмат прыйдзецца перарабіць
/*
1. Такое уражанне, што вы не кампіліравалі ўвогуле. Бо ў вас проста вагон памылак кампіляцыі.
2. Калі вы абвясцілі хоць адзін канструктар, кампілятар не стварае канструктар без параметраў.
3. Чаму у нашчадках вы змянілі спецыфікатар доступу на private?
4. Я таксама прасіў каб палімарфізм не ператварыўся ў розныя cout
5. Уся прыгажосць палімарфізма ў тым, што мы не ведаем, які ў дадзены момант перад намі аб'ект, а аб'етк правільна рэагуе у дадзенай сітуацыі. У вас жа да кожнага доктара асылаецца пацыент з адпаведнай хваробай, гэта цалкам не тое.
*/


#include <iostream>

using namespace std;
class Doctors
{
public:
    Doctors () {};
    Doctors (const Doctors &a)  = delete;
    Doctors &operator=(const Doctors&a)=delete;
    Doctors (Doctors &&a)=delete;
    Doctors &operator=(const Doctors &&a)=delete;
    virtual ~Doctors () {}
    int problems()
    {
        return k;
    }
    virtual string name() = 0;

protected:
    int k;
    string n;
};

class Terapevt: public Doctors
{
public:
    Terapevt() : Doctors()
    {
        k = 1;
    }

    string name()
    {
        return "Terapevt";
    }
};
class Travmotolog: public Doctors
{
public:
    Travmotolog(): Doctors()
    {
        k = 2;
    }
    string name()
    {
        return "Travmotolog";
    }
};

class Okylist: public Doctors
{
public:
    Okylist(): Doctors()
    {
        k = 3;
    }
    string name()
    {
        return "Okylist";
    }
};

class Stomatolog: public Doctors
{
public:
    Stomatolog(): Doctors()
    {
        k = 4;
    }
    string name()
    {
        return "Stomatolog";
    }
};
class Xiryrg: public Doctors
{
public:
    Xiryrg(): Doctors()
    {
        k = 5;
    };
    string name()
    {
        return "Xiryrg";
    }

};
int main()
{
    int a;
    cout <<"What bothers? "<< endl
         << " 1.Throat\n 2.Body\n 3.Eyes\n 4.Teeth\n 5.Stomach\n";

    Doctors *doc[5] =
    {
        new Terapevt() ,
        new Travmotolog(),
        new Okylist(),
        new Stomatolog(),
        new Xiryrg()
    };

    //cin >> a;

    int problem;
    cout << "Enter number your problem: ";
    cin >> problem;

    for (int i = 0; i < 5; i++)
    {
        if (problem == doc[i]->problems())
        {
            cout << "Doctor " << doc[i]->name() << " said: I will help you\n";
        }
        else
        {
            cout <<"Doctor " << doc[i]->name() << " said: I can't fix you\n";
        }
    }

}
