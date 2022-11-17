//Practise for topic: CALL BY ARGUMENT .[nummber = 4]
#include<stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int number = 4;
    square(number);
    printf ("number = %d\n",number);

    printf ("______________\n");
    printf("\n");

    _square(&number);
    printf("number = %d\n",number);

    return 0;
}

//call by value
void square(int n){
n = n * n ;
printf("square = %d\n",n);
}
//call by argument
void _square(int *n){
*n = (*n) * (*n);
printf("square = %d\n",*n);   
}
