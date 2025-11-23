#include<stdio.h>
int main()
{
  float costperitem, totalcost, finalcost;
  int item, quantity, confirm;
  float GST=0.18;
  //THE MENU CARD
 
  printf("____CaFe MeNu____\n");
  printf("1.Coffee:   -/Rs 90.50\n");
  printf("2.Tea:      -/Rs 30.00\n");
  printf("3.Sandwich: -/Rs 120.50\n");
  printf("Enter the item number of your choice: ");
  scanf("%d",&item);
  printf("\nEnter the quantity of the item you want to order: ");
  scanf("%d",&quantity);
if (item==1)
{ 
    costperitem=90.50;
 printf("\nYou have ordered %d Coffees:\n",quantity);
}
else if (item==2)
{
    costperitem=30.00;
    printf("\nYou have ordered %d Teas:\n",quantity);
}
else if (item==3)
{
    costperitem=120.50;
    printf("\nYou have ordered %d Sandwhiches:\n",quantity);
}
else 
{
    printf("Sorry we have only the above 3 items in our menu:\n");
}
printf("\nPress 1 to confirm your order, or 2 to cancel: ");
scanf("%d", &confirm);

if (confirm == 1) {
    printf("\nYour order will be ready soon....\n");
} else {
    printf("\nThank you. Please come by again....\n");
    return 0;  // stop program on cancel
}
if (item==1)
{
    printf("Your Total Cost of order is: ");
    totalcost=costperitem*quantity;
}
else if (item==2)
{
    printf("Your Total Cost of order is: ");
    totalcost=costperitem*quantity;
}
else if (item==3)
{
    printf("Your Total Cost of order is: ");
    totalcost=costperitem*quantity;
}
else 
{printf("Please select the order number correctly...\n");}
finalcost=totalcost+(totalcost*GST);
printf("\n===== ORDER SUMMARY =====\n");
    printf("Item Number     : %d\n", item);
    printf("Quantity        : %d\n", quantity);
    printf("Cost per Item   : Rs %.2f\n", costperitem);
    printf("Total (no GST)  : Rs %.2f\n", totalcost);
    printf("GST (18%%)      :  Rs %.2f\n", totalcost * GST);
    printf("Final Amount    : Rs %.2f\n", finalcost);
    printf("============================\n");
    printf("Thank you!\nPlease visit us again soon!\n");
return 0;
}
