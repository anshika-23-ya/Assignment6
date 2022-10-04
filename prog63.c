//  Write a program to find the hcf
#include<stdio.h>
int main()
{
    int x,y,lcm,hcf;
    printf("Enter the number :");
    scanf("%d  %d %d",&x,&y,&hcf);
    lcm=x*y/hcf;
    printf("hcf is %d",lcm);
}