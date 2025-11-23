//GCD Normal method.

/*#include<stdio.h>
int main()
{
    int num1,num2,gcd=1;
    int i;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1 ,&num2);

    for (i=1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        gcd = i;
    }

    printf("The GCD of the given two numbers is: %d", gcd);
    return 0;
}*/

// GCD OF GIVEN NUMBERS (RECURSIVE)

#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of the given numbers is %d", gcd(a, b));
    return 0;
}
