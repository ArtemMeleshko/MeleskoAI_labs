#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "List.h"


class Stack : public List
{

	const int length = 4;


	int curr = 0;

public:
	Stack();
	~Stack();
	void push(char c);
	char pull();
};




#endif // STACK_H_INCLUDED
