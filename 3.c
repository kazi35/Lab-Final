#include<stdio.h>

int main(){
    float a,b,addition,substraction;

    printf("Enter 2 number:");
    scanf("%f %f",&a,&b);

    addition = a+b;
    substraction = a-b;

    printf("Addition = %.2f\n",addition);
    printf("Substraction = %.2f\n",substraction);

    return 0;
}