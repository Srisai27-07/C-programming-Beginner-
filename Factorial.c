/*
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
*/


#include<stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    return 1;
    else
    return n * fact(n - 1);
}

int main()
{
    int num;
    printf("Enter the number whose factorial you want: ");
    scanf("%d",&num);
    printf("The Factorial of %d is : %d ",num,fact(num));
    return 0;
}
