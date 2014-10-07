#ifndef HUMAN_H
#define HUMAN_H

#include <vector>
#include <list>

#include "../../lib/Date/Date.h"
#include "../Marriage/Marriage.h"

class Marriage;

class Human {
public:
    Human();
    Human(const std::string& firstName, const std::string& lastName);

    std::list<Human*> getChildren() const;
    std::list<Human*> getPartners() const;
    std::list<Human*> getParents() const;
    std::list<Human*> getAncestors() const;

    std::string getFirstName() const;
    std::string getLastName() const;

    Date getBirthDate() const;
    Date getDeathDate() const;

    void setParentsMarriage(Marriage *marriage);

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setBirthDate(const Date& date);
    void setDeathDate(const Date& date);

private:
    std::string firstName = "Unknown";
    std::string lastName = "";

    Date birthDate;
    Date deathDate;

    Marriage* parentsMarriage;
    std::vector<Marriage*> ownMarriages;
};

#endif //HUMAN_H
