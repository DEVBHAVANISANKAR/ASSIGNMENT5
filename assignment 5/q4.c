//Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
   int a=1,n;
   printf("enter the number of odd natural numbers you want to print : ");
   scanf("%d",&n);
   while(a<=n)
   {
    printf("%d ",(a*2)-1);
    a++;
    
   }
   
       
       return 0;  
}