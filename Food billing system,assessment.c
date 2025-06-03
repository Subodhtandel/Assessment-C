//Create a Food billing system
#include <stdio.h>

int main() {
    int choice, quantity, totalAmount = 0;
    char moreOrders;

    do {
        printf("\n --- Menu ---");
        printf("\n 1. Pizza   - 180rs/pcs");
        printf("\n 2. Burger  - 100rs/pcs");
        printf("\n 3. Dosa    - 120rs/pcs");
        printf("\n 4. Idli    - 50rs/pcs");
        printf("\n Please enter your choice: ");
        scanf("%d", &choice);

        printf("Enter the quantity: ");
        scanf("%d", &quantity);

        int price = 0;
        switch (choice) {
            case 1:
                printf("\n You have selected Pizza.");
                price = 180;
                break;
            case 2:
                printf("\n You have selected Burger.");
                price = 100;
                break;
            case 3:
                printf("\n You have selected Dosa.");
                price = 120;
                break;
            case 4:
                printf("\n You have selected Idli.");
                price = 50;
                break;
            default:
                printf("\n Invalid choice.");
                continue;
        }

        int amount = price * quantity;
        totalAmount += amount;

        printf("Amount = %d\n", amount);
        printf("%d\n Total Amount is = ", totalAmount);

        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders); 

    } while (moreOrders == 'y' || moreOrders == 'Y');

    printf("%d\n Final Bill Amount = ", totalAmount);
    printf("\n Thank you for your order!");
}

