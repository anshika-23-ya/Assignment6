//Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the n natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum =sum+i;}
    printf("%d",sum);
    return 0;
}