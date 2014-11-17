#ifndef CONSOLELIST_H_INCLUDED
#define CONSOLELIST_H_INCLUDED
#include "List.h"
class consoleList: public List
{
public:
	
	consoleList()noexcept;
	consoleList (const consoleList  &other);
	consoleList (consoleList  &&other)noexcept;
  consoleList &operator=(const consoleList  &other);
	CconsoleList  &operator=(consoleList  &&other)noexcept;
	virtual ~ConsoleEightLike() noexcept;

	
	void output()const;
private:
   virtual void printElements(PositionedData * array, int size)const;
};
