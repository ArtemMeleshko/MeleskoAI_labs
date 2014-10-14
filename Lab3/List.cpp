#include "List.h"
#include <iostream>

List::List(int l): len(l), head(nullptr)
{}

List::~List()
{
	Node* p = head;
	Node * q;
	while (p != nullptr)
	{
        q = p->next;
        delete[] p->data;
        delete p;
		p = q;
	}
}


void List::add()
{

	Node* temp = new Node;

	temp->data = new char[len];
	for (int i=0; i<len; i++) temp->data[i] = '.';
	temp->next = nullptr;

	if (head == nullptr)
	{
		head = temp;
	}
	else
	{
		Node* p = head;
		while (p->next != nullptr)
		{
			p = p->next;
		}


		p->next = temp;
	}
}


bool List::del()
{
	if (head == nullptr) return false;
    else {

		Node* p = head;
		Node* q = nullptr;
		while (p->next != nullptr) {
            q = p;
			p = p->next;
		}


		delete[] p->data;
		delete p;

        if (q == nullptr) {
            head = nullptr;
        }
        else {  -
            q->next = nullptr;
        }
        return true;
	}
}


void List::show()
{
	std::cout << "\nlist content:\n";
	Node* p = head;
	while (p != nullptr)
	{
		for (unsigned int i = 0; i < len; ++i)
		{
			std::cout << p->data[i];
		}
		std::cout << std::endl;
		p = p->next;
	}
}


void List::put(char c, int pos)
{
	if (head != nullptr)
	{
		Node * p = head;
		Node * q = nullptr;
		while (p->next != nullptr)
		{
            q = p;
			p = p->next;
		}
		if (pos >= 0) p->data[pos] = c;
		else q->data[len+pos] = c;
	}
}



char List::get(int pos)
{
	if (head != nullptr)
	{
		Node * p = head;
		Node * q = nullptr;
		while (p->next != nullptr)
		{
            q = p;
			p = p->next;
		}
		if (pos >= 0) return p->data[pos];
		else if (q != nullptr) return q->data[len+pos];
	}
	return 0;
}

