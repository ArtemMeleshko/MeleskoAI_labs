#ifndef MARRIAGE_H
#define MARRIAGE_H

#include <vector>

#include "../Human/Human.h"

class Human;

class Marriage
{
public:
    Marriage();
    Marriage(Human* husband, Human* wife);

    void addChild(Human *child);

    std::list<Human*> getChildren();
    std::list<Human*> getPartners();

    Human* getHusband();
    Human* getWife();

private:
    Human* husband;
    Human* wife;
    std::vector<Human*> children;
};

#endif //MARRIAGE_H
