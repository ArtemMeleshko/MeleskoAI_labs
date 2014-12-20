
#ifndef IMPLIMENTATION_H_INCLUDED
#define IMPLIMENTATION_H_INCLUDED
#include "List.h"
class List::implimentation
{
public:

    implementation()noexcept;
    implementation(const implementation &obj);
    implementation(Implementation &&obj)noexcept;
    implementation &operator=(const implementation &obj);
    implementation &operator=(implementation &&obj)noexcept;
    ~implementation() noexcept;


    void add;
    void show;
    void put(char c, int pos);
    chat get(int pos);
    bool del;
private:
    struct Node
    {
        char* data;
        Node* next;
    };

};

//TODO фарматуйце калі ласка тэкст
