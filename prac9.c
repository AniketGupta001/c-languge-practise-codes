#include <stdio.h>
// write  a function to print n terms of the fibnacci sequence using loop/iteration function?

// f(n)=f(n-1)+f(n-2)

int i;
int main
{
    for (int i = 2, i < 6, i++)
    {
        if (i > 6)
        {
            continue;
        }
        printf(" the fib of  6 is : %d", i);
    }
    return 0;