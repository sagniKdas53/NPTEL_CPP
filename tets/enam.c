#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
		wednesday, thursday = 10, friday, saturday};

enum month {jan,feb,mar};
int main()
{
	printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
			wednesday, thursday, friday, saturday);

    printf("\n%d %d %d",jan,feb,mar);

    printf("\n%d",sunday+monday);


    printf("\n");
	return 0;
}
