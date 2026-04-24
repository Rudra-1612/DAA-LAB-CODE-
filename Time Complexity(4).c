// Q8) Write a C program and simplify Big-O Notations.
// T(n) = n³ + nlog(n) + 20

#include <stdio.h>

int main()
{
    int n, i, j, k;
    int count = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < n; k++)
            {
                count++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)   // written correction on sheet
        {
            count++;
        }
    }

    printf("Total operation executed : %d\n", count);

    return 0;
}