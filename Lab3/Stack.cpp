#include "Stack.h"


Stack::Stack()
{
    len = length;
    curr = length - 1;
}

Stack::~Stack()
{
}

void Stack::push(char c)
{

    if (curr == length - 1) this->add();
	curr = (curr + 1) % length;
	put(c, curr);
}

char Stack::pull()
{
    char c = this->get(curr);
	if (c != (char) 0) curr--;
	if (curr < -length / 2) {
        this->del();
        curr += length;
    }
	return c;
}
