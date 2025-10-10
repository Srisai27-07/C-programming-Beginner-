#include <stdio.h>

int main()
{
    // CAFE MENU
    int item, quantity;
    float cost_of_each_item, total_cost, final_cost;
    float GST = 0.18;

    printf("====== CaFe MeNu ======\n");
    printf("1. Coffee: Rs 70.18\n");
    printf("2. Tea: Rs 30.36\n");
    printf("3. Sandwich: Rs 110.72\n");

    printf("Enter the item number you want to order: ");
    scanf("%d", &item);

    printf("How many of the above item/items do you want to order: ");
    scanf("%d", &quantity);

    if (item == 1)
    {
        cost_of_each_item = 70.18;
        total_cost = cost_of_each_item * quantity;
        final_cost = total_cost + (total_cost * GST);
        printf("You have ordered %d Coffee(s)\n", quantity);
        
    }
    else if (item == 2)
    {
        cost_of_each_item = 30.36;
        total_cost = cost_of_each_item * quantity;
        final_cost = total_cost + (total_cost * GST);
        printf("You have ordered %d Tea(s)\n", quantity);
       
    }
    else if (item == 3)
    {
        cost_of_each_item = 110.72;
        total_cost = cost_of_each_item * quantity;
        final_cost = total_cost + (total_cost * GST);
        printf("You have ordered %d Sandwich(es)\n", quantity);
        
    }
    else
    {
        printf("We have only 3 items in our menu.\n");
    }
    printf("____YoUr BiLl____\n");
    printf("Cost of each item:   %.2f\n", cost_of_each_item);
    printf("Total cost:     %.2f\n",total_cost);
    printf("Final Cost (Including GST):   %.2f\n",final_cost);
    printf("_____/THANK YOU/_____\n Please Visit us AGAIN.....!");

    return 0;
}
