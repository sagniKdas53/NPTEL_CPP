#include <stdio.h>
int main()
{
    int a[10], n, i = 0;
    printf("Enter the number to convert: ");
    scanf("%d", &n);
    int hold = n; //res;
    for (i = 0; n > 0; i++)
    {
        //res = (hold >> i) & 1;
        //res = res & 1;
        n = n >> 1;
        //cout << res << endl;
        a[i] = (hold >> i) & 1;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}