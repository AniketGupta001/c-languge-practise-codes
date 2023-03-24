//take a number (n) from user and output is cube (n*n*n).
#include <stdio.h>
int main(){
    
    int n ;
    printf("enter n");
    scanf("%d",&n);

    int cube=n*n*n;
    printf("the cube of entered number id : %d\n",cube);
    
    return 0;
}
