//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
   int a=1,n=1;
   printf("enter the number of cubes you want to print : " );
   scanf("%d",&n);
   while(a<=n)
   {
    printf("%d ",a*a*a);
    a+=1;
    
   } 
       return 0;  
}