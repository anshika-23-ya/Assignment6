//8. Write a program to check whether a given number is a Prime number or
//not
#include<stdio.h>
int main()
{
    int n,i,flag;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
         { flag=1;
          break;}
    }
    if(flag==1)
     printf("Not a prime ");
    else
      printf("Primr Number");
    return 0;
}