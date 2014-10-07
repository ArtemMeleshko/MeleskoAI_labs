#ifndef DATE_H
#define DATE_H

#include <string>
#include <ostream>

class Date
{
public:
    Date();
    Date(const std::string date);
    // default copy constructor
    // defult assign operator

    bool operator<(const Date& right) const;
    bool operator<=(const Date& right) const;
    bool operator>(const Date& right) const;
    bool operator>=(const Date& right) const;

    friend std::ostream& operator<<(std::ostream& os, const Date& date);

private:

    unsigned short int day = 0;
    unsigned short int mounth = 0;
    unsigned short int year = 0;

    char separator = ':';
};

#endif //DATE_H
