#ifndef CONSOLELIST_H_INCLUDED
#define CONSOLELIST_H_INCLUDED
#include "List.h"
class consoleList: public List
{
public:
	
	consoleList()noexcept;
	consoleList (const consoleList  &obj);
	consoleList (consoleList  &&obj)noexcept;
        consoleList &operator=(const consoleList  &obj);
	consoleList  &operator=(consoleList  &&obj)noexcept;
	virtual ~consoleList() noexcept;

	
	void output()const;
private:
   virtual void printElements(PositionedData * array, int size)const;
};
