#ifndef IMPLIMENTATION_H_INCLUDED
#define IMPLIMENTATION_H_INCLUDED
#include "List.h"
class List::implimentation
{
public:
    
    Implementation()noexcept;
	Implementation(const Implementation &other);
	Implementation(Implementation &&other)noexcept;
	Implementation &operator=(const Implementation &other);
	Implementation &operator=(Implementation &&other)noexcept;
	~Implementation() noexcept;
	
	
    void add;
    void show;
    void put(char c, int pos);
    chat get(int pos);
    bool del;
private:
    ...
};
