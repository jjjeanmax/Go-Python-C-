#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
    map<int, char> map1;
    map<int, char>::iterator cursor;
    map1[1] = 'a';
    map1[2] = 'b';
    map1[3] = 'c';
    cout << "Original MAP" << endl;
    cout << "KEY\tELEMENT" << endl;
    for (cursor = map1.begin(); cursor != map1.end(); cursor++)
    {
        cout << cursor->first;
        cout << '\t' << cursor->second << '\n'
             << endl;
    }
    map1.erase({3});
    cout << "Updated MAP" << endl;
    cout << "KEY\tELEMENT" << endl;
    for (cursor = map1.begin(); cursor != map1.end(); cursor++)
    {
        cout << cursor->first;
        cout << '\t' << cursor->second << '\n'
             << endl;
    }
}