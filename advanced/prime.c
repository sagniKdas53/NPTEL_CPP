#include <stdio.h>

int is_prime_number(int num, int i)
{
    if (num < 2)
    {
        printf("\nEnter numbers greater than 1\n");
        exit(0);
    }
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (num % i == 0)
        {
            return 0;
        }
        else
        {
            return is_prime_number(num, i - 1);
        }
    }
}

int main()
{
    int n, i;
    printf("\nEnter the number: ");
    scanf("% d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i > n / 2)
        printf("\n % d is a Prime Number\n", n);
    else
        printf("\n % d is not a Prime Number\n", n);

    int n, flag;
    printf("Enter a number: ");
    scanf("%d", &n);
    flag = is_prime_number(n, n / 2);
    if (flag == 1)
    {
        printf("\n%d is a prime number\n", n);
    }
    else
    {
        printf("\n%d is not a prime number\n", n);
    }
    return 0;
}
