//sum of n natutal numbers using Recursion.
#include<stdio.h>
int sum(int x);
int main()
{
    int n,a;
    printf("Enter any number:");
    scanf("%d",&n);
    a=sum(n);
    printf("sum of %d natutal numbers:%d",n,a);
    return(0);
}
int sum(int x){
    if (x==1){
        return 1;
    }
    else if(x==0){
        return 0;
    }
    else{
        return x+sum(x-1);
    }
}