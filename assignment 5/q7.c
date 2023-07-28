//Write a program to print the first N even natural numbers in reverse order

  #include<stdio.h>
int main()
{
   int n;
   printf("enter the number of even natural numbers you want to print in reverse : ");
   scanf("%d",&n);
   while(n>0)
   {
    printf("%d ",((n*2)-2));
    n--;
    
   } 
       return 0;  
}
 
