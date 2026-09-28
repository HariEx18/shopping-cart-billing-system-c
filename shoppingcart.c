#include <stdio.h>
#include <string.h>


int main()
{
   char item[50] = "";
   float price = 0.0f;
   int quantity = 0;
   float total = 0.0f;

    printf("What item would you like to buy ? ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';
    printf("What is the price of the item you chose ? ");
    scanf(" %f", &price);
    printf("How many would you like to Purchase ? ");
    scanf(" %d", &quantity);

    total = price * quantity;
    printf("\n=================================\n");
    printf("         PURCHASE BILL\n");
    printf("=================================\n");

    printf("Item     : %s\n", item);
    printf("Price    : $%.2f\n", price);
    printf("Quantity : %d\n", quantity);

    printf("---------------------------------\n");

    printf("Total    : $%.2f\n", total);

    printf("=================================\n");
    return 0;
}
