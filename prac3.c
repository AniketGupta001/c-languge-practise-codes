#include<stdio.h>
//write  functions to calculate area of a rectangle.

//function prototype
float printfRectangleArea( float  a , float b);

//function call
int main(){
float a ;
printf("Enter the side (a) of rectangle  : ");
scanf("%f", &a);
float b;
printf("enter the side (b) : ");
scanf("%f",&b);

    printf ("area is  : %f ", printfRectangleArea(  a ,b ));

return 0 ;
}



//function defination
float printfRectangleArea( float a , float b){
    return a * b ;
} 