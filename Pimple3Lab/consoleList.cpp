#include "consoleList.h"
#include <iostream>


using namespace std;

consoleList::consoleList():
    List()
{}
consoleList()::ConsoleList(const ConsoleList &obj):
    List(other)
{}
consoleList::consoleList(consoleList &&obj)noexcept:
List (other)
{}

consoleList &consoleList::operator=(const consoleList &obj)
{
    return *this;
}
consoleList &consoleList::operator=(const consoleList &obj)noexcept
{
    return *this;
}

consoleList::~consoleList() noexcept
{}

void consoleList::output()const
{
    PositionedData *array = nullptr;
    int size = 0;
    getElements(array, size);
    printElements(array, size);
    delete [] array;
    array = nullptr;
}

void consoleList::consoleList(PositionedData *array, int size)const
{
    for(int i = 0; i < size; ++i)
    {
        if(array[i].position == PositionedData::head)
            cout << "(" << array[i].datum << ")";
        else
            cout << array[i].datum;

        cout << " ";
    }

    cout << endl;
}
