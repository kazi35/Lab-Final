#include<stdio.h>

int main(){
    int a,b,addition,substraction,multipication,division;

    printf("Enter 2 number:");
    scanf("%d %d",&a,&b);

    addition = a+b;
    substraction = a-b;
    multipication = a*b;
    division = a/b;

    printf("Addition = %d\n",addition);
    printf("Substraction = %d\n",substraction);
    printf("Multipication = %d\n",multipication);
    printf("Division = %d\n",division);

    return 0;
}