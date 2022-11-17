//convert temprature from rom  farhenite to  celcius
#include<stdio.h>

//function prototype
float convertTemp(float  celcius);

//function call
int main(){
    float far = convertTemp(35);
    printf("the celius is  =  %f",far);
    return 0 ;
}

//function defination
float convertTemp(float celcius){
    float far = ( celcius *(9.0/5.0)+32);
    return far;
}