//ASSIGNMENT 1A: Electricity BIll                                            PRN: 125B1B186
//NAME: Srisai S Atipamulu      

#include<stdio.h>
int main()
{
 int units,custID;
 float totalcost,finalcost;
 float GST=0.18;
 char name[25];
 printf("====ELECTRICITY BILL====\n");
 printf("Please enter your name: ");
 scanf("%s",name);
 printf("Please enter your designated ID: ");
 scanf(" %d", &custID);
 printf("\n          Welcome %s.",name);
 printf("\nThe units are charged as follows:\n 1.First 100 units: -/Rs1.50 per unit.\n 2.Next 100 units: -/Rs2.00 per unit.\n 3.Above 200 units: -/Rs3.00 per unit.\n");
 printf("Please enter the units consumed this month: ");
 scanf("%d",&units);
 if (units>=0 && units<=100)
 {
    totalcost=1.50*units;
 }
 else if (units>100 && units<=200)
 {
   totalcost=1.50*100+(units-100)*2.00;
 }
 else if (units>200)
 {
   totalcost=(100*1.50)+(100*2.00)+(3.00*(units-200));
 }
 else 
 {
     printf("Please enter valid unit consummed\n");
 }
 finalcost=totalcost+(totalcost*GST);
printf("\n===== BILL SUMMARY =====\n");
    printf("Customer Name : %s\n", name);
    printf("Customer ID   : %d\n", custID);
    printf("Units Consumed: %d\n", units);
    printf("Total (before GST)  : Rs %.2f\n", totalcost);
    printf("GST (18%%)           : Rs  %.2f\n", totalcost * GST);
    printf("Final Amount Payable: Rs %.2f\n", finalcost);
    printf("=================================\n");
    printf("Thank you!\nUse electricity wisely.\n");

 return 0;
}