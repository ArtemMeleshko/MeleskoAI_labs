#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack s;
	for (int i=0; i<10; i++) s.push(65+i);
	s.show();

	cout << "\npulled:\n";
	for (int i=0; i<3; i++) cout << s.pull();
	cout << endl;

	s.show();

	cout << "\npulled:\n";
	for (int i=0; i<2; i++) cout << s.pull();
	cout << endl;

	s.show();

	return 0;
}

// праца з'яўляецца кампаноўкай малазвязаных тэкстаў
// TODO перарабіць!
