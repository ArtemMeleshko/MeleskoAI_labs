#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
//#include <exeption>
#include "exeption.h"

template < typename Data> struct Nod
{
    typedef Nod <Data> Node;
    Data *data;
    Node* next;

};

template < typename Data> class List
{
    typedef Nod <Data> Node;
    Node* head = nullptr;

public:

    // List(int l): len(l), head(nullptr){}
    int length, curr;
    List(int len = 4)
    {
        this->head = nullptr;
        this->length = len;
        this->curr = length - 1;
    }

    ~List();
    void add();
    bool del();
    void show();
    void put(Data c, int pos);
    Data get(int pos);
    void push(Data c);
    Data pull();
};
template <typename Data> List<Data>::~List()
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
template <typename Data> void List<Data>::add()
{
    Node* temp = new Node;

    temp->data = new Data[length];
    for (int i=0; i<length; i++) temp->data[i] = '.';
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
template <typename Data> bool List<Data>::del()
{
    if (head == nullptr) return false;
    else
    {

        Node* p = head;
        Node* q = nullptr;
        while (p->next != nullptr)
        {
            q = p;
            p = p->next;
        }


        delete[] p->data;
        delete p;

        if (q == nullptr)
        {
            head = nullptr;
        }
        else
        {
            q->next = nullptr;
        }
        return true;
    }
}
template <typename Data> void List<Data>::show()
{
    std::cout << "\nlist content:\n";
    Node* p = head;
    while (p != nullptr)
    {
        for (unsigned int i = 0; i < length; ++i)
        {
            std::cout << p->data[i];
        }
        std::cout << std::endl;
        p = p->next;
    }
}
template <typename Data> void List<Data>::put(Data c, int pos)
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
        else q->data[length+pos] = c;
    }
}
template <typename Data> Data List<Data>::get(int pos)
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
        else if (q != nullptr) return q->data[length+pos];
    }

}
template <typename Data> void List<Data>::push(Data c)
{

    if (curr == length - 1) this->add();
    curr = (curr + 1) % length;
    put(c, curr);
}

template <typename Data> Data List<Data>::pull()
{
    char c = this->get(curr);
    if (c != (char) 0) curr--;
    if (curr < -length / 2)
    {
        this->del();
        curr += length;
    }
    return c;
}



#endif // LIST_H_INCLUDED
