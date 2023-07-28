//Write a program to print a table of N.
#include<stdio.h>
int main()
{
   int a,n=1;
   printf("enter the number which table you want to print : ");
   scanf("%d",&a);
   while(n<=10)
   {
    printf("%d ",a*n);
    n+=1;
    
   } 
       return 0;  
}