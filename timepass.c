/*#include<stdio.h>
int main() 
{
    int age;
    printf("Enter age: ");
    scanf("%d\n",&age);
    if (age >= 18)
    {
    printf("The person is an Adult.");
    }
    else 
    {
    printf("Not an adult");
    }
    return 0;
}
     //PALINDROME
#include<stdio.h>
int main()
{
   
    int num,reversed=0,remainder,original;
    printf("Enter a number (3 Digit or more): ");
    scanf("%d",&num);
    
    original = num;
    while (num != 0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    if (original == reversed)
    {
        printf("The number entered is palindrome.\n");
    }
    else 
    printf("The number is not a palindrome.\n");
  return 0; 
}
  // SUM THE DIGITS
#include<stdio.h>
int main()
{
    int num,sum=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&num);

    while (num != 0)
    {
        remainder=num%10;
        sum=sum+remainder;
        num /= 10;
    }
    printf("The sum of the digits from the given number is: %d",sum);
    return 0;
}
//PALIMDROME RECURSSION
#include<stdio.h>
int reverseNumber(int num, int rev)
{
 if (num == 0) 
 return rev;
 return reverseNumber(num / 10, rev * 10+ num%10);
}
int main()
{
    int num, reversed;
    printf("Enter a number: ");
    scanf("%d",&num);
    reversed = reverseNumber(num,0);

    if ( num == reversed)
    printf("%d is Palindrome.\n",num);
    else
    printf("The number is not a Palindrome");
    return 0;
}
//Fibonacci Recurssion
#include<stdio.h>
int fibonacci( int n)
{
    if (n == 0)
    return 0;
    else if (n == 1)
    return 1;
    else
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
// Factorial Recurssion
#include<stdio.h>
int fact(int n)
 {
    if (n==0 || n==1)
    return 1;
    else
    return n*fact(n-1)
 }
int main()
 {
    int n;
    printf("enter the number whose factorial is needed: ");
    scanf("%d",&n);
    printf("fact of number is",fact(n));
    return 0;
 }
//ARMSTRONG NUMBER
#include<stdio.h>
int main()
{
    int num,arms,sum=0,remainder=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num = arms;
    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder*remainder*remainder;
        num = num/10;
    }
    if (sum == arms)
    {
     printf("The number is an Armstrong Number.\n");
    }
    else if (sum != arms)
    {
        printf("The number is not an Armstrong Number.\n");
    }
    else 
    printf("Enter a positive number.\n");
    
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
#include<stdio.h>

int main()
{
    int phy, chem, maths, eng, comp;
    float total, percent;
    char name[20];
    double prn;

    printf("===========================================\n");
    printf("                  MARKSHEET                \n");
    printf("===========================================\n");

    printf("STUDENT's NAME: ");
    scanf("%s", name);
    printf("PRN: ");
    scanf("%lf", &prn);

    printf("-------------------------------------------\n");
    printf("SUBJECT                (marks out of 100)\n");
    printf("-------------------------------------------\n");

    printf("Physics   : ");
    scanf("%d", &phy);
    printf("Chemistry : ");
    scanf("%d", &chem);
    printf("Mathematics: ");
    scanf("%d", &maths);
    printf("English   : ");
    scanf("%d", &eng);
    printf("Computer  : ");
    scanf("%d", &comp);

    if (phy >= 0 && phy <= 100 &&
        chem >= 0 && chem <= 100 &&
        maths >= 0 && maths <= 100 &&
        eng >= 0 && eng <= 100 &&
        comp >= 0 && comp <= 100)
    {
        total = phy + chem + maths + eng + comp;
        percent = (total / 500) * 100;

        printf("-------------------------------------------\n");
        printf("Total Marks    : %.0f / 500\n", total);
        printf("Percentage     : %.2f%%\n", percent);

        printf("Result         : ");
        if (percent < 40.00)
            printf("Fail\n");
        else if (percent < 55.00)
            printf("Third Class\n");
        else if (percent < 65.00)
            printf("Second Class\n");
        else if (percent < 80.00)
            printf("First Class\n");
        else if (percent < 95.00)
            printf("Distinction\n");
        else
            printf("Extra Ordinary\n");
    }
    else
    {
        printf("❌ Invalid marks entered. Marks should be between 0 and 100.\n");
    }

    printf("===========================================\n");
    return 0;
}
#include<stdio.h>
int main()
{
    float percnt[5] = {85.00, 90.50, 91.13, 75.50, 99.90};
    int i;
    for (i = 0; i < 5 ; i++)
    {
        printf("The percentages of the students are %.2f. \n", percnt[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int matrix[3][3] = 
    {
        {1,2,3},
        {2,3,5},
        {3,4,5},
    };
    int i,j;

    printf("The 3 by 3 matrix is : \n");
    for (i = 0;i < 3;i++)
    {
        for (j = 0; j < 3;j++)
        {
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}
#include<stdio.h>
int main()
{
  int num[5];
  int i,avg,sum = 0;
  //Taking of the 5 numbers
  printf("Enter 5 nunmbers: ");
  for(i = 0; i < 5;i++)
  {
    scanf("%d",&num[i]);
  }
  //Printing the given numbers
  printf("The 5 numbers given are:\n");
  for(i = 0; i < 5; i++)
  {
    printf("%d \n",num[i]);
  }
  //Average of the 5 numbers
  for(i=0;i<5;i++)
  {
    sum += num[i];
  }
  avg = sum/5;
  printf("The average of the 5 numbers is: %d",avg);
  return 0;
}
#include<stdio.h>
int main()
{
    int a[5] = { 1,2,3,4,5};
    int b[5] = { 5,4,3,2,1};
    int i;
    int sum[5];
    printf("The sum of the two array is: ");
    for(i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
        printf("%d\n",sum[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a[5],b[5],sum[5];
    int i;
    printf("Enter 5 numbers (separated by space): ");
    for(i = 0; i < 5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter another set of 5 numbers: ");
    for(i = 0; i < 5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The sum of the two user given arrays is: ");
    for(i = 0;i < 5;i++)
    {
        sum[i] = a[i] + b[i];
        printf("%d\t",sum[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,area;
    printf("Enter the dimension of square: ");
    scanf("%d",&a);
    printf("\n");
    area = a*a;
    printf("The area of the given square is %d", area);
    return 0;
}
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;
    int sum = 0;
    printf("Enter any four numbers: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    sum = n1 + n2 + n3 + n4;
    printf("The sum of the given four numbers is:%d",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int num[5];
    int sum = 0, i;
    printf("Enter any 5 numbers: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The given numbers are: \n");
    for(i = 0; i < 5; i++)
    {
        printf(" %d \n",num[i]);
        sum += num[i];
    }
    printf("The sum of the given 5 numbers is: %d",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int num,remain,sum=0;
    printf("Enter any number (digit  > 2): ");
    scanf("%d",&num);
    
    while(num >= 0)
    {
         remain = num%10;
         sum = sum + remain;
         num = num/10;
    }
    printf("The sum of the digits of the given number is: %d",sum);
    return 0;

}
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the value of num1 and num2 respectively : ");
    scanf("%d %d",&n1, &n2);
    printf("\n");
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("The numbers have been swapped.\n");
    printf("The number 1 now is: %d\n",n1);
    printf("The number 2 now is: %d\n",n2);
    return 0;

}
#include<stdio.h>
int main()
{
    int n1,temp,n2;
    printf("Enter the value of num1 and num2 respectively : ");
    scanf("%d %d",&n1, &n2);
    printf("\n");
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("The numbers have been swapped.\n");
    printf("The number 1 now is: %d\n",n1);
    printf("The number 2 now is: %d\n",n2);
    return 0;

}*/
#include<stdio.h>
int main()
{
    char charac[5];
    int i;
    char key;
    int present = 0;

    printf("Enter any 5 characters: ");
    for(i = 0;i < 5;i++)
    {
        scanf(" %c",&charac[i]);
    }
    printf("\n");
    printf("The characters entered are: ");
    for(i = 0;i < 5;i++)
    {
        printf("%c ",charac[i]);
    }
    printf("\n");

    printf("Enter a character to check whether it is present: ");
    scanf(" %c",&key);
    for(i = 0;i < 5;i++)
    {
        if(key == charac[i])
        {
            present = 1;
        }
    }
    if ( present == 1)
    {
        printf("The entered charac is present.\n");
    }
    else
    printf("The entered charac is not present.\n");
    return 0;
}

