//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
   int n;
   printf("enter the number of natural numbers you want to print in reverse: ");
   scanf("%d",&n);
   while(n>0)
   {
    printf("%d ",n);
    n--;
    
   }
   
       
       return 0;  
}