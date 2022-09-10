//  WAP to find next prime number of a given number

#include <stdio.h>
int main()
{
    int i, j, n, count = 0;
    printf("Enter the number ");
    scanf("%d", &n);

    for (i = n; i > 0; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            if (count == 2)
            {
                printf("%d", i);
                break;
            }
        }
    }
        return 0;
    }
