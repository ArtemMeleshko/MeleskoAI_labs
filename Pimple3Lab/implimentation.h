#ifndef IMPLIMENTATION_H_INCLUDED
#define IMPLIMENTATION_H_INCLUDED
#include "List.h"
class List::implimentation
{
public:
    
        implementation()noexcept;
	implementation(const Implementation &other);
	implementation(Implementation &&other)noexcept;
	implementation &operator=(const Implementation &other);
	implementation &operator=(Implementation &&other)noexcept;
	~implementation() noexcept;
	
	
    void add;
    void show;
    void put(char c, int pos);
    chat get(int pos);
    bool del;
private:
    ...
};
