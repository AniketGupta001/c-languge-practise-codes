//write a program showing simple interest conversion .
#include<stdio.h>

int main(){
int Principal,Rate,Time;
printf("enter Principal(rs) ");
scanf("%d",&Principal);
printf("enter rate(rs) ");
scanf("%d",&Rate);
printf("enter Time(hr) ");
scanf("%d",&Time);

int SimpleInterest =(Principal*Rate*Time)/100;
printf("the simple interest is %d",SimpleInterest);

return 0;

}