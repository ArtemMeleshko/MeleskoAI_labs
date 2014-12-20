#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

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
        List& operator=(const List &obj);
	List(const List& obj);
	List(List &&obj);
	List& operator=(List &&obj);
	
	void add();
	bool del();
	void show();
	void put(char c, int pos);
	char get(int pos);
};



#endif // LIST_H_INCLUDED
