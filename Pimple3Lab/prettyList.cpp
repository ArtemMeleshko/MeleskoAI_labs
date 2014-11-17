
#include "prettyList.h"
#include <iostream>

prettyList::prettyList(const prettyList &other):
    consoleList(other)
{}

prettyList::prettyList(prettyList &&other)noexcept:
consoleLits(other)
{}

prettyList &&prettyList::operator=(const prettyList &other)
{
    return *this;
}

prettyList &prettyList::operator=(prettyList && other)noexcept
{
    return *this;
}


prettyList::~prettyList() noexcept
{}

void prettyList::printElements(Position
edData *array, int size)const
{
    ...
}
