//x=0
//*ptr=&x
#include<stdio.h>
int main(){
    int x;
    int *ptr;


    ptr=&x;
    *ptr = 0;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    
    *ptr=*ptr+5;
    printf("%d\n",x);
    printf("%d\n",*ptr);

     
    *ptr = *ptr+1;
    printf("%d\n",x);
    printf("%d\n",*ptr);



   
    
return 0;  
}
