//print substraction and comparision between two pointers.
#include <stdio.h>

int main(){
    int age = 22;
    int _age = 23;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("the diference is: %d\n",ptr - _ptr);

    _ptr = &age;
    printf("the comparison results: %u\n",ptr == _ptr);

    return 0 ;
}edited