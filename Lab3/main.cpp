

#include <iostream>
#include "Stack.h"
#include <conio.h>

char* fun(char *str, int *flag, char symbol);
using namespace std;

int main()
{
	Stack s;
	for (int i = 0; i<10; i++) s.push(65 + i);
	s.show();

	cout << "\npulled:\n";
	for (int i = 0; i<3; i++) cout << s.pull();

	cout << endl;

	s.show();

	cout << "\npulled:\n";
	for (int i = 0; i<2; i++) cout << s.pull();
	cout << endl;
	
	int flag = 0;
	char str[50];

	cout << "Enter an expression with parentheses:";
	cin >> str;

	fun(str, &flag, 'a');

	if (!flag)
		cout << "YES";
	else
		cout << "NO";



}

char* fun(char *str, int *flag, char symbol)

{

	while (*str)

	{
		if (*flag<0) return 0;

		switch (*str++)

		{
		case '(': (*flag)++; str = fun(str, flag, ')'); break;
		case '[': (*flag)++; str = fun(str, flag, ']'); break;
		case '{': (*flag)++; str = fun(str, flag, '}'); break;
		case ')':
		case ']':
		case '}':  if (*(str - 1) == symbol)
		{
			(*flag)--;
			return str;
		}
				   (*flag)--;
				   break;
		}
	}
	
	return str;
}
