#include "Date.h"
#include "DateException.h"

Date::Date()
{
}

Date::Date(const std::string date)
{
    if(date.length() !=  10 * sizeof(char))
    {
        throw DateException("Invalid date format! Use format such as dd:mm:yyyy or similar formats with any separators");
    }

    day = atoi(date.substr(0,2).c_str());
    mounth = atoi(date.substr(3,2).c_str());
    year = atoi(date.substr(6,4).c_str());
}

bool Date::operator<(const Date& right) const
{
    return this->year < right.year ? true : this->mounth < right.mounth ? true : this->day < right.day;
}

bool Date::operator<=(const Date& right) const
{
    return (year == right.year && mounth == right.mounth && day == right.day) || *this < right;
}

bool Date::operator>(const Date& right) const
{
    return this->year > right.year ? true : this->mounth > right.mounth ? true : this->day > right.day;
}

bool Date::operator>=(const Date& right) const
{
    return (year == right.year && mounth == right.mounth && day == right.day) || *this > right;
}

std::ostream& operator<<(std::ostream& os, const Date& date)
{
    if(date.day < 10)
    {
        os<<'0';
    }

    os<<date.day<<date.separator;
    if(date.mounth < 10)
    {
        os<<'0';
    }

    os<<date.mounth<<date.separator;
    os<<date.year<<std::endl;

    return os;
}

