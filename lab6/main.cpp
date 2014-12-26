#include <iostream>
#include "List.h"


using namespace std;

int main()
{
    List <int> List_s;
    for (int i = 0; i<10; i++) List_s.push(65 + i);
    List_s.show();

    cout << "\npulled:\n";
    for (int i = 0; i<3; i++) cout << List_s.pull();

    cout << endl;

    List_s.show();

    cout << "\npulled:\n";
    for (int i = 0; i<2; i++) cout << List_s.pull();
    cout << endl;
    return 0;
}
