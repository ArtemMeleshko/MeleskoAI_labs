#include "Human.h"

Human::Human()
{
}

Human::Human(const std::string& firstName, const std::string& lastName)
{
    setFirstName(firstName);
    setLastName(lastName);
}

void Human::setParentsMarriage(Marriage *marriage)
{
        parentsMarriage = marriage;
}

std::list<Human*> Human::getChildren() const
{
    std::list<Human*> children;
    std::list<Human*> tmp;

    for(unsigned int i = 0; i < ownMarriages.size(); ++i)
    {
        tmp = ownMarriages[i]->getChildren();
        children.insert(children.end(), tmp.begin(), tmp.end());
    }

    return children;
}

std::list<Human*> Human::getPartners() const
{
    std::list<Human*> partners;
    std::list<Human*> tmp;
    Human* partner;

    for(unsigned int i = 0; i < ownMarriages.size(); ++i)
    {
        tmp = ownMarriages[i]->getPartners();
        partner = tmp.front() == this ? tmp.back() : tmp.front() ;
        partners.push_back(partner);
    }

    return partners;
}

std::list<Human*> Human::getParents() const
{

    std::list<Human*> parents;

    if(parentsMarriage){
        parents = parentsMarriage->getPartners();
    }

    return parents;
}

std::list<Human*> Human::getAncestors() const
{
    std::list<Human*> ancestors;
    std::list<Human*> parents;
    std::list<Human*> tmp;

    parents = getParents();
    ancestors.insert(ancestors.end(), parents.begin(), parents.end());

    for(std::list<Human*>::iterator it = parents.begin(); it != parents.end(); ++it)
    {
        tmp.insert(tmp.end(), (*it)->getParents().begin(), (*it)->getParents().end());
    }

    ancestors.insert(ancestors.end(), tmp.begin(), tmp.end());

    for(std::list<Human*>::iterator it = tmp.begin(); it != tmp.end(); ++it)
    {
        ancestors.insert(ancestors.end(), (*it)->getParents().begin(), (*it)->getParents().end());
    }

    return ancestors;
}


std::string Human::getFirstName() const
{
    return firstName;
}

std::string Human::getLastName() const
{
    return lastName;
}

Date Human::getBirthDate() const
{
    return birthDate;
}

Date Human::getDeathDate() const
{
    return deathDate;
}

void Human::setFirstName(const std::string& firstName)
{
    this->firstName = firstName;

}

void Human::setLastName(const std::string& lastName)
{
    this->lastName = lastName;
}

void Human::setBirthDate(const Date& date)
{
    birthDate = date;

}

void Human::setDeathDate(const Date& date)
{
    deathDate= date;
}
