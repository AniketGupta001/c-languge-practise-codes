#include<stdio.h>
//write a program to print the calculation of a good of n price including tax.

//functio prototype
void calculatePrice(float value);

//function call
int main(){

float value = 100.0;//original value
calculatePrice(value);
return 0;
}

//function defination
float total;
void calculatePrice(float value){
total = value + ( value  *18);
printf("FINAL PRICE IS : %f\n",total);
}