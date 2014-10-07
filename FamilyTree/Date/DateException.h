#ifndef DATEEXCEPTION_H
#define DATEEXCEPTION_H

#include <string>
#include <exception>

class DateException: std::exception {

public:
    DateException();
    DateException(const std::string msg)
    {
         this->msg = msg;
    }

    virtual const char* what() const throw()
    {
        return this->msg.c_str();
    }

private:
    std::string msg;
};

#endif //DATEEXCEPTION_H
