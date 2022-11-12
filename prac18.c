//what a program to enter price of 3 items and print their final cost with gst.
#include<stdio.h>

int main(){
    float Price[3];
    printf("enter the price of 3 item : ");
    scanf("%f",&Price[0]);
    scanf("%f",&Price[1]);
    scanf("%f",&Price[2]);

    printf("total price of item 1 including GST : %f\n",Price[0]+(0.18*Price[0]));
    printf("total price of item 2 including GST : %f\n",Price[1]+(0.18*Price[1]));
    printf("total price of item 3 including GST : %f\n",Price[2]+(0.18*Price[2]));

    return 0 ;
    
}
