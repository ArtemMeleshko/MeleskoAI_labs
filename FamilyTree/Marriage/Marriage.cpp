#include "Marriage.h"

Marriage::Marriage():
    husband(nullptr), wife(nullptr)
{
}

Marriage::Marriage(Human* husband, Human* wife)
{
    this->husband = husband;
    this->wife = wife;
}

void Marriage::addChild(Human* child)
{
    child->setParentsMarriage(this);
    children.push_back(child);
}

std::list<Human*> Marriage::getChildren()
{
    std::list<Human*> children;

    for(unsigned int i = 0; i < this->children.size(); ++i)
    {
            children.push_back(this->children[i]);
    }

    return children;
}

std::list<Human*> Marriage::getPartners()
{
    std::list<Human*> partners;

    partners.push_back(husband);
    partners.push_back(wife);

    return partners;
}

Human* Marriage::getHusband()
{
    return husband;
}

Human* Marriage::getWife()
{
    return wife;
}

