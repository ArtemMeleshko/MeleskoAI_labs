#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Number
{

public:
    Number (int value) value(value) {}
    Number() = default;
    Number(const Number& obj) = default;
    Number(Number&& obj) = default;
    Number& operator=(const Number& a) = default;
    Number& operator=(Number&& a) = default;
    ~Number() = default;

    bool operator () (int a)
    {
        return a>value;
    }
private:
    int value;// TODO а дзе вы ініцыалізуеце value?
};

int main()
{
    vector<int> v;
    for (auto i = 1; i < 16; i+=3)
    {
        v.push_back(i);
    }
    cout << endl << count_if(v.begin(), v.end(), Number()) << " Total numbers " << endl;
    int counter = 0;
    for_each(v.begin(), v.end(), [&counter] (int n)
    {
        cout << n;
        if (n % 4 == 0)
        {
            cout << " Yes " << endl;
            ++counter;
        }
        else
        {
            cout << " No " << endl;

        }
    });
    cout << "There are " << counter
         << " number divisible by 4." << endl;

}

// і фарматуйце калі ласка код
