// This is my first project in C programming and im gonna start from a calculator:
#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter any 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter the action you want to perform[+,-,*,/]:");
    scanf(" %c",&c);
    if(c=="+"){
        printf("ans=%d",a+b);
    }
    else if(c=="-"){
        printf("ans=%d",a-b);
    }
    else if(c=="*"){
        printf("ans=%d",a*b);
    }
    else if(c=="/"){
        printf("ans=%d",a/b);
    }
    else{
        printf("Invalid action");
    }
    return(0);
}