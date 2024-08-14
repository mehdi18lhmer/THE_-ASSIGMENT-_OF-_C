#include <stdio.h>

#define BAKERY_BREAD 3
#define MEAT_SEAFOOD 120
#define PASTA_RICE 5
#define SOUPS_CANNED 10
#define EGGS 1
#define DISCOUNT 0.1
#define DISCOUNT1 0.3
#define DISCOUNT2 0.2

void welcome(void) {
    printf("Welcome to our place!\n");
    printf("We hope you like our lovely green sophisticated shop parlor!\n");
    printf("Feel free to set up wherever you like, but please avoid playing loud music and don't bring your beverages because we have everything.\n");
    printf("If you want a delivery order, check out our mobile app: shope.app-store\n");
}

int customer(void) {
    int type_customer;
    printf("Which type of customer are you?\n");
    printf("1 -> normal\n");
    printf("2 -> premium\n");
    scanf("%d", &type_customer);
    return type_customer;
}

void menu(void) {
    printf("1. Bakery and Bread: 3 MAD\n");
    printf("2. Meat and Seafood: 120 MAD\n");
    printf("3. Pasta and Rice: 5 MAD\n");
    printf("4. Soups and canned drinks: 10 MAD\n");
    printf("5. Eggs: 1 MAD\n");
}

int calculate(int quantity, int item_type) {
    int total = 0;
    int discount;

    switch (item_type) {
        case 1:
            total = BAKERY_BREAD * quantity;

            break;
        case 2:
            total = MEAT_SEAFOOD * quantity;

            break;
        case 3:
            total = PASTA_RICE * quantity;

            break;
        case 4:
            total = SOUPS_CANNED * quantity;
            break;
        case 5:
            total = EGGS * quantity;
            if (total > 30) {

                discount = DISCOUNT * total;
                total -= discount;
            }
            break;

        default:
            printf("Invalid input.\n");

            break;
    }
    return total;
}

int premium(void) {
    int quantity1, quantity2, quantity3, quantity4, quantity5;
    int total = 0;
    char other;

    do {
        printf("Enter quantity for Bakery and Bread: ");
        scanf("%d", &quantity1);
        printf("Enter quantity for Meat and Seafood: ");
        scanf("%d", &quantity2);
        printf("Enter quantity for Pasta and Rice: ");
        scanf("%d", &quantity3);
        printf("Enter quantity for Soups and canned drinks: ");
        scanf("%d", &quantity4);
        printf("Enter quantity for Eggs: ");
        scanf("%d", &quantity5);

        total += BAKERY_BREAD * quantity1 + MEAT_SEAFOOD * quantity2 + PASTA_RICE * quantity3 + SOUPS_CANNED * quantity4 + EGGS * quantity5;

        printf("Do you want to buy something else? (y/n): ");
        scanf(" %c", &other); 
    } while (other == 'y' || other == 'Y');

    return total;
}

void applyDiscount(int *totalPrice) {

    int discount;

    if (*totalPrice > 5000) {

        discount = *totalPrice * DISCOUNT1;

        *totalPrice -= discount;

    } else if (*totalPrice > 2000) {

        discount = *totalPrice * DISCOUNT2;

        *totalPrice -= discount;
    }
}

int main() {
    int type_customer, total = 0;

    welcome();

    type_customer = customer();

    if (type_customer == 1) {

        int item_type, quantity;

        menu();

        printf("Enter the number of items: ");

        scanf("%d", &quantity);

        printf("Enter the item type: ");
        scanf("%d", &item_type);

        total = calculate(quantity, item_type);

        printf("the total amount is: %d\n", total);

    } else if (type_customer == 2) {

        total = premium();

        applyDiscount(&total);

        printf("total amount after discount : %d \n", total);
    } else {
        printf("Invalid customer type.\n");
    }

    return 0;
}
