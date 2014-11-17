#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <cstddef>
using namespace std;





class List

{
private:
    class implimentation;
    implimentation *pimpl;

protected:
    void printElements(PositionedData * array, int size)const;
	Node* head = nullptr;
public:
    List();
    ~List();
    List& operator=(const List &other);
    List(const List &oter);
    List(List &&oter);
    List& operator=(List&&oter);
	
	int len;
	List(int l=1024);
	~List();
	void add();
	bool del();
	void show();
	void put(char c, int pos);
	char get(int pos);
};



#endif // LIST_H_INCLUDED
