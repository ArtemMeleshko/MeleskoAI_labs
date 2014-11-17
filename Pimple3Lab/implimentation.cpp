#include "implimentation.h"
#include <iostream>

using namespace std;
List::implementation::implementation()noexcept:
head(nullptr)
{}

List::implementation::implementation(const implementation &other):
    head(nullptr)
{
    copy(other.head);
}
List::implementation::implementation(implementation &&other)noexcept:
head(nullptr)
{
    swap(head, other.head);
}

List::implementation &List::implementation::operator=(const implementation &other)
{
    if(this != &other)
    {
        clear();
        copy(other.head);
    }

    return *this;
}

List::implementation &List::implementation::operator=(implementation && other)noexcept
{
    swap(head, other.head);
    return *this;
}

List::implementation::~implementation() noexcept
{
    clear();
}

List::implimentation::List(int l): len(l), head(nullptr)
{}

List::implimentation:: ~ implimentation()
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

void List:: implimentation ::add()
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
bool List :: implimentation :: del()
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


void List :: implimentation :: show()
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


void List :: implimentation :: put(char c, int pos)
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



char List :: implimentation :: get(int pos)
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
Stack :: implimentation :: Stack()
{
    len = length;
    curr = length - 1;
}

Stack :: implimentation :: ~ implimentation()
{
    clear();
}



void Stack :: implimentation :: push(char c)
{

    if (curr == length - 1) this->add();
	curr = (curr + 1) % length;
	put(c, curr);
}

char Stack:: implimentation ::pull()
{
    char c = this->get(curr);
	if (c != (char) 0) curr--;
	if (curr < -length / 2) {
        this->del();
        curr += length;
    }
	return c;
}

