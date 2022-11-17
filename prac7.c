#include <stdio.h>

int calcPercentage(int sc, int math, int sanskrit);

int main(){

    int sc = 95; 
    int math = 95;
    int sanskrit = 95;

    printf("the perentage : %d ", calcPercentage( sc , math ,  sanskrit )); 
    return 0;
}
int calcPercentage(int sc, int math, int sanskrit){
   return((sc + math + sanskrit) / 3);
}