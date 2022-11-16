#include <stdio.h>
// factorial of n . find it .(n=5)

// funciton prototype
int fact(int n);

// function call
int main()
{
    printf("the factorial of number is %d", fact(3));
    return 0;
}

// recursive fucntion
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}
