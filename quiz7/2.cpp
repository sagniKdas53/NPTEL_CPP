#include <iostream>
using namespace std;
int main() {
const char ch = 'a';
const char *p = &ch;
char *pt = const_cast<char *>(p); //LINE-1
*pt = 'b';
cout << *pt;
return 0;
}