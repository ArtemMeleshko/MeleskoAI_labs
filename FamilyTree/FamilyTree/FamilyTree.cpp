#include "FamilyTree.h"

#include <list>
#include <iostream>

FamilyTree::FamilyTree()
{
}

void FamilyTree::addHuman(Human* human)
{
    people.push_back(human);
}

void FamilyTree::marry(Human* husband, Human* wife)
{
    Marriage *newMarriage = new Marriage(husband, wife);
    marriages.push_back(newMarriage);
}

Human* FamilyTree::findHuman(const std::string& firstName, const std::string& lastName) const
{
    for(unsigned int i = 0; i < people.size(); ++i)
    {
        if(people[i]->getLastName() == lastName && people[i]->getFirstName() == firstName)
        {
            return people[i];
        }
    }

    return nullptr;
}

Marriage* FamilyTree::findMarriage(const Human* husband, const Human* wife) const
{

    for(unsigned int i = 0; i < marriages.size(); ++i)
    {
        if(marriages[i]->getHusband() == husband && marriages[i]->getWife() == wife)
        {
            return marriages[i];
        }
    }
    return nullptr;
}

void showWithLevels(Human* human, int level = 0)
{
    std::list<Human*> parents = human->getParents();

    if(!parents.empty() && parents.front())
    {

        showWithLevels(parents.front(), level + 1);
    }

    for(int i = 0; i < level ; ++i)
    {
        std::cout<<"                  ";
    }

    std::cout<<human->getFirstName()<<" "<<human->getLastName()<<std::endl;

    if(!parents.empty() && parents.back())
    {
        showWithLevels(parents.back(), level + 1);
    }
}


void FamilyTree::showFamilyTree(Human* human)
{
    ::showWithLevels(human);
}

