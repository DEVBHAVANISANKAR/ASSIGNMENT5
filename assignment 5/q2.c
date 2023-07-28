//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
   int a=1,n;
   printf("enter the number of natural numbers you want to print : ");
   scanf("%d",&n);
   while(a<=n)
   {
    printf("%d ",a);
    
    a++;
   }
   
       
       return 0;  
}