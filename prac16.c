//write a function to calculate the sum , product , and average of 2 numbers.print that average in the miain function.
#include <stdio.h>
void doWork(int a , int b , int *sum , int *product , int *average );

int main(){
int a=3 , b=5;




return 0 ;
}

void doWork(int a , int b , int *sum , int *product , int *average ){
    sum = a +  b;
    product = a * b;
    average = (a+b)/2;    
}