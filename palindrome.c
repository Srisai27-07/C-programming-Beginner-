//ASSIGNMENT 3C: THE GIVEN NUMBER ID PALINDROME
//NAME: SRISAI SRINIWAS ATIPAMULU
//PRN: 125B1B186

#include <stdio.h>

int main() {
    int num, original, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) 
    {
        remainder = num % 10;               
        reversed = reversed * 10 + remainder; 
        num = num / 10;                     
    }

    if (original == reversed)
        printf("The given number is a Palindrome.\n");
    else
        printf("The given number is not a Palindrome.\n");

    return 0;
}
