//write a program to calculate perimeter of rectangle take sides , a and b from the user.
#include<stdio.h>
int main(){
    int l,b;
    printf("enter lenth");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);

    int perimeter=2*(l+b);

    printf("the perimeter of the rectangle is : %d",perimeter);

return 0;

}

s