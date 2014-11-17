#ifndef IMPLIMENTATION_H_INCLUDED
#define IMPLIMENTATION_H_INCLUDED
#include "List.h"
class List::implimentation
{
public:
    
        implementation()noexcept;
	implementation(const implementation &other);
	implementation(Implementation &&other)noexcept;
	implementation &operator=(const implementation &other);
	implementation &operator=(implementation &&other)noexcept;
	~implementation() noexcept;
	
	
    void add;
    void show;
    void put(char c, int pos);
    chat get(int pos);
    bool del;
private:
    ...
};
