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

    Doctors (const Doctors &a)  = delete;
    Doctors &operator=(const Doctors&a)=delete;
    Doctors (Doctors &&a)=delete;
    Doctors &operator=(const Doctors &&a)=delete;
    virtual ~Doctors () {}

    virtual void problems(string s)=0;


};

class Terapevt: public Doctors
{   public: Terapevt(string s){};
    private : void problems(string s)
    {
     cout << "cure you Terapevt ";
    }
};
class Travmotolog: public Doctors
{   public: Travmotolog() {};
    void problems(string s)
    {
        cout<<"cure you Travmatolog" ;
    }


};

class Okylist: public Doctors
{   public: Okylist() {};
    void problems(string s)
    {
      cout << "cure you Okylist " ;
    }
};

class Stomatolog: public Doctors
{   public: Stomatolog() : Doctors() {};
    void problems(string s)
    {
    cout << "cure you Stomatolog ";
    }
};
class Xiryrg: public Doctors
{   public: Xiryrg() {};
    void problems(string s)
    {cout << "cure you Xiryrg ";

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
        new Stomotolog(),
        new Xiryrg()
    };
    cin >> a;
    switch(a)
    {

    case 1:
        doc[0].problems("Throat");
        break;
    case 2:
        doc[1].problems("Body");
        break;
    case 3:
        doc[2].problems("Eyes");
        break;
    case 4:
        doc[3].problems("Teeth");
        break;
    case 5:
        doc[4].problems("Stomach");
        break;

    }
}
