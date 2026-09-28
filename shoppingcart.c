#include <stdio.h>

int main()
{
   char item[50] = "";
   float price = 0.0f;
   int quantity = 0;
   float total = 0.0f;

    printf("What item would you like to buy?");
    fgets(item, sizeof(item), stdin);
    printf("What is the price of the item you chose ?");
    scanf(" %f", &price);
    printf("How many would you like to Purchase ?");
    scanf(" %d", &quantity);

    total = price * quantity;
    printf("\n==============================\n");
    printf("         PURCHASE BILL\n");
    printf("==============================\n");
    printf("%-10s : %s", "Item", item);
    printf("%-10s : $%.2f\n", "Price", price);
    printf("%-10s : %d\n", "Quantity", quantity);
    printf("------------------------------\n");
    printf("%-10s : $%.2f\n", "Total", total);
    printf("==============================\n");
    return 0;
}