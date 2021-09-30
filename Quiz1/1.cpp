#include <iostream>
using namespace std;
int main()
{
    char s[] = "string";
    char *cp = s;
    for (; *cp != '\0'; cp++);
    int i = cp - s;
    cout << i;
    return 0;
}

//output 6