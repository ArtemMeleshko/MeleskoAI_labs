
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <cstdlib>
#include <iostream>
#include <cstddef>
using namespace std;


struct Node
{
	char* data;
	Node* next;
};


class List
{
	Node* head = nullptr;
public:
	int len;
	List(int l=1024);
	List& operator=(const List &obj);
	List(const List& obj);
	List(List &&obj);
	List& operator=(List &&obj);
	~List();
	void add();
	bool del();
	void show();
	void put(char c, int pos);
	char get(int pos);
};



#endif // LIST_H_INCLUDED



