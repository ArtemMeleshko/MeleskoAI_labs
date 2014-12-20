
#include "prettyList.h"
#include <iostream>

prettyList::prettyList(const prettyList &obj):
    consoleList(obj)
{}

prettyList::prettyList(prettyList &&obj)noexcept:
consoleLits(obj)
{}

prettyList &&prettyList::operator=(const prettyList &obj)
{
    return *this;
}

prettyList &prettyList::operator=(prettyList && obj)noexcept
{
    return *this;
}


prettyList::~prettyList() noexcept
{}

void prettyList::printElements(PositionedData *array, int size)const
{
    cout<<"[ ";
    for(int i=0;i<size;++i)
    {
        cout<<array[i]<<" ";
    }
    cout<<" ]";
}
