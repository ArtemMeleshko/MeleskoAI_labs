#include <iostream>

#include "lib/FamilyTree/FamilyTree.h"

using namespace std;

int main()
{
    FamilyTree fm;
//-----------------
    fm.addHuman(new Human("Alex","Smirnov"));
    fm.addHuman(new Human("Mirana","Grey"));

    Human* alex = fm.findHuman("Alex","Smirnov");
    Human* mirana = fm.findHuman("Mirana","Grey");

    fm.marry(alex, mirana);

    Marriage* alexPlusMirana = fm.findMarriage(alex, mirana);

    alexPlusMirana->addChild(new Human("Petr","Smirnov"));

    Human* petr = alexPlusMirana->getChildren().front();

//------------------

    fm.addHuman(new Human("Vasya","Oblomov"));
    fm.addHuman(new Human("Elena","Mix"));

    Human* vasya = fm.findHuman("Vasya","Oblomov");
    Human* elena = fm.findHuman("Elena","Mix");

    fm.marry(vasya, elena);

    Marriage* vasyaPlusElena = fm.findMarriage(vasya, elena);

    vasyaPlusElena->addChild(new Human("Kira","Oblomova"));

    Human* kira = vasyaPlusElena->getChildren().front();
//------------------
    fm.marry(petr, kira);

    Marriage* petrPlusKira = fm.findMarriage(petr, kira);

    petrPlusKira->addChild(new Human("Volodya","Smirnov"));

    Human* volodya = petrPlusKira->getChildren().front();

    fm.showFamilyTree(volodya);

    return 0;
}
