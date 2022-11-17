#include <stdio.h>
// write  a function to print n terms of the fibnacci sequence using recurdion function .
// fibnacci sequence = (0,1,1,2,3,5,8,13,21.....)
// fib(2)=fib(0)+fib(1)
// fib(n)=fib(n-1)+fib(n-2)
int fib(int n);
int main(){
    printf("the fibnacci of the number is : %d", fib(6));
    return 0;
}

int fib(int n){
    if(n==0){return 0;}
    if(n==1){return 1;}
 
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;

    printf("fib of %d is : %d\n",n,fibN);
    

    return fibN;
}
