#include<stdio.h>

int main(){
    int n,m,sum_total=0,reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n>0){
        m=n%10;
        n=n/10;
        sum_total=sum_total+m;
        reverse=(reverse*10)+m;
    }

    printf("Sum of digits = %d\n",sum_total);
    printf("Reverse of the number = %d\n",reverse);

    return 0;
}