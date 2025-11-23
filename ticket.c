//ASSIGNMENT 1B: TICKET BOOKER                      PRN: 125B1B186
//NAME: Srisai S Atipamulu
#include<stdio.h>
int main()
{
 int seatno[10],no_seats,i;
 char Class;
 float price1ticket,totalprice,finalprice;
 float GST=0.18;
 printf("         ___WELCOME___\n");
 printf("      ===TICKET BOOKER===\n");
 printf("We have the following class available:\n1.'S' for Sleeper class: -/Rs1399.99 per seat\n2.'A' for A.C class:     -/Rs1899.99 per seat\n3.'G' for General class: -/Rs500.50 per seat\n");
 printf("Please select the class (Enter the letter): ");
 scanf("%c",&Class);
 if (Class=='A'|| Class=='a')
   {
     price1ticket=1899.99;
     printf("You have selected A.C class.\n");
    }
 else if (Class=='S'|| Class=='s')
   {
     price1ticket=1399.99;
     printf("You have selected Sleeper class.\n");
    }
 else if (Class=='G'|| Class=='g')
   {
     price1ticket=500.50;
     printf("You have selected General class.\n");
    }
 else 
 {
     printf("Sorry we only have the above three options:\n");
 }
     printf("Please enter how many seats you want to book:");
     scanf("%d",&no_seats); 
 printf("Please enter the seat numbers you want to assign (separated by space):\n");
    for (i = 1; i <= no_seats; i++)
    {
        scanf("%d", &seatno[i]);
    }
    totalprice=price1ticket*no_seats;
    finalprice=totalprice+(totalprice*GST);
    printf("\n===== TICKET SUMMARY =====\n");
    printf("Class Selected    : %c\n", Class);
    printf("Seats Booked      : %d\n", no_seats);
    printf("Seat Numbers      : ");
    for (i = 1; i <= no_seats; i++)
    {
        printf("%d ", seatno[i]);
    }
    printf("\nPrice per Ticket  : Rs %.2f\n", price1ticket);
    printf("Total (before GST): Rs %.2f\n", totalprice);
    printf("GST (18%%)         : Rs %.2f\n", totalprice * GST);
    printf("Final Amount      : Rs %.2f\n", finalprice);
    printf("==========================\n");
    printf("Thank you for booking with us!\nHave a safe journey!\n");

 return 0;
}
