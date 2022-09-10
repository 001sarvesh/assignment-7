// WAP to check whether a given number is there in fibonaci series or not

#include <stdio.h>
void main()
{
    int n, a = 0, b = 1, c;
    scanf("%d ", &n);
    if (n == a || n == b)
    {
        printf("fibonacci");
        c = a + b;
        while (c < n)
        {
            a = b;
            b = c;
            c = a + b;
        }
        if (c == n)
        {
            printf("Fibonacci");
        }
        else
        {
            printf("Not fibonacci");
        }
    }
}