//Write a program to reverse a given number
//not
#include<stdio.h>
int main()
{
    int rev=0,n ,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n !=0)
     {rem=n%10;
    n=n/10;
    rev=rev*10+rem;}
    printf("%d",rev);
}