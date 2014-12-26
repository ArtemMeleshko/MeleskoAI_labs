#ifndef EXCEPTION_H_INCLUDED
#define EXCEPTION_H_INCLUDED
#include <exception>

class NotFoundListException : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "Element not found";
    }
};

class InsertingListException : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "Insert an impossible";
    }
};


#endif // EXCEPTION_H_INCLUDED
