//print aadhar of 5 people through loop.
#include<stdio.h>
int main(){
int aadhar[5];
//input 
  int *ptr = &aadhar[0];
    for(int i = 0 ;i < 5 ;i++){
      printf("%d st index: ",i);
      scanf("%d",(ptr + i));
    }
//output
   for(int i = 0 ;i < 5 ;i++){
      printf("%d st index contains address: %d\n",i,*(ptr+i));
    }
return 0;
}