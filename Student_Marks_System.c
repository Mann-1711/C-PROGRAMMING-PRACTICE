// Student Marks System
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float percentage,total;
    char name[50],grade;
    printf("enter your name:");
    scanf("%49s",&name);
    printf("Enter your marks:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    
    percentage=(total/500)*100;
    printf("\nName:%s",name);
    printf("\nTotal Marks:%.2f/500.00",total);
    printf("\npercentage:%.2f%%",percentage);
    return(0);
}
