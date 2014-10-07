#ifndef FAMILYTREE_H
#define FAMILYTREE_H

#include <vector>
#include <ostream>

#include "../Human/Human.h"
#include "../Marriage/Marriage.h"

class FamilyTree
{
public:
    FamilyTree();

    void addHuman(Human* human);
    void marry(Human* husband, Human* wife);

    Human* findHuman(const std::string& firstName, const std::string& lastName) const;
    Marriage* findMarriage(const Human* husband, const Human* wife) const;

    void showFamilyTree(Human* human);

private:
    std::vector<Human*> people;
    std::vector<Marriage*> marriages;
};

#endif // FAMILYTREE_H
