#include <bits/stdc++.h>
using namespace std;

// Defining enum Year
enum year {
	Jan,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sep,
	Oct,
	Nov,
	Dec
};

// Driver Code
int main()
{
	int i;

    year yp = Mar;

	// Traversing the year enum
	for (i = Jan; i <= Dec; i++)
		cout << i << endl << yp << endl;

	return 0;
}
