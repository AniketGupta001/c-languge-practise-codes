//write a program to convert celcius into farhenite.(celcius=c;farhenite=f)
#include<stdio.h>

int main(){
    int c;
    printf("enter c");
    scanf("%d",&c);
    
    int farhenite=(c*9/5)+32;
    printf("the value of farhenite is = %d",farhenite);

    return 0; 

}
