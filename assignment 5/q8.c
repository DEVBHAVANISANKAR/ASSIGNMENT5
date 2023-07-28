// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
   int a=1,n;
   printf("enter the numbwe of squares you want to print : ");
   scanf("%d",&n);
   while(a<=n)
   {
    printf("%d ",a*a);
    a+=1;
    
   } 
       return 0;  
}