#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100
#define MAX_NAME_LENGTH 50


void get_customer_data(int ids[], char names[][MAX_NAME_LENGTH], int items[], int amounts[], int *count);
void calculate_prices(int amounts[], int items[], int prices[], int count);
void show_customer_info(int ids[], char names[][MAX_NAME_LENGTH], int items[], int prices[], int count);
void show_summary(int prices[], char names[][MAX_NAME_LENGTH], int count);

int main() {
        int ids[MAX_CUSTOMERS];
    char names[MAX_CUSTOMERS][MAX_NAME_LENGTH];
         int items[MAX_CUSTOMERS];
     int amounts[MAX_CUSTOMERS];
    int prices[MAX_CUSTOMERS];
     int count = 0;

        get_customer_data(ids, names, items, amounts, &count);
       calculate_prices(amounts, items, prices, count);
    show_customer_info(ids, names, items, prices, count);
    show_summary(prices, names, count);

    return 0;
}
void get_customer_data(int ids[], char names[][MAX_NAME_LENGTH], int items[], int amounts[], int *count) {
                           printf("please the costomer  data (end of day by entering Purchase iD as -1):\n");
    while (*count < MAX_CUSTOMERS) 
    printf("the Purchase ID: ");
                   scanf("%d", &ids[*count]);
        if (ids[*count] == -1) {
            break;
        }
        printf("enter full Name: ");
            scanf(" %s[^\n]", names[*count]);
                        printf("Enter Item Type (1-5): ");
        scanf("%d", &items[*count]);
        printf("Enter Amount: ");
        scanf("%d", &amounts[*count]);
        (*count)++;
    }


void calculate_prices(int amounts[], int items[], int prices[], int count) {
                    
                       int item_prices[] = {0, 3, 120, 5, 10, 1}; 
    for (int i = 0; i < count; i++) {
        prices[i] = amounts[i] * item_prices[items[i]];
    }
}

void show_customer_info(int ids[], char names[][MAX_NAME_LENGTH], int items[], int prices[], int count) {
    printf("\nFull Name               ID       Item Type  Price\n");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-20s %-8d %-10d %d\n", names[i], ids[i], items[i], prices[i]);
    }
}
void show_summary(int prices[], char names[][MAX_NAME_LENGTH], int count) {
    int total = 0;
                 char highest_spender[MAX_NAME_LENGTH];
 int highest_spending = 0;
    int spending[MAX_CUSTOMERS] = {0};

    for (int i = 0; i < count; i++) {
             total += prices[i];
                spending[i] += prices[i];
  if (spending[i] > highest_spending) {
            highest_spending = spending[i];
                      strcpy(highest_spender, names[i]);
        }
    }

    printf("total money : %d MAD\n", total);
    printf("customer who paid the most: %s with %d MAD\n", highest_spender, highest_spending);
}
