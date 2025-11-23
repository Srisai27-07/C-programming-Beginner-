//ASSIGNMENT 2B: Factorial of number.
//NAME: Srisai Sriniwas Atipamulu
//PRN: 125B1B86


#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is: %d",fact);
     return 0;
}