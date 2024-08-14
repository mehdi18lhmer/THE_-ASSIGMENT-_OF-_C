#include <stdio.h>
#include <string.h>
#define BAKERY_BREAD 3
#define MEAT_SEAFOOD 120
#define PASTA_RICE 5 
#define SOUPS_CANNED 10 
#define EGGS 1
#define DISCOUNT 0.1 
#define DISCOUNT1 0.3
#define DISCOUNT2 0.2 



void welcom (void){
printf("Welcome to our place!\n");
printf("We hope you like our lovely green sophisticated shop parlor!\n");
printf("Feel free to set up wherever you like, but please avoid playing loud music and
don't bring your beverages because we have everything.\n");
printf("if you want a delivery order, check out our mobile app : shope.app-store\n")

}
int customer ( ){
int type_customer ;
printf(" which of customer you are ??\n");
printf(" 1 -> normal \n");
printf(" 2 -> premium \n");
scanf("%d", &type_customer);
return type_customer;

}

void menu (void){
printf("Bakery and Bread: 3MAD \n");
printf(". Meat and Seafood: 120 MADs\n");
printf("Pasta and Rice: 5MAD \n");
printf("Soups and canned drinks: 10 MAD\n ");
printf(". Eggs: 1MAD \n");

}

int calculate (int quantity , int item_type){

int total;
int discount ;

switch(item_type){
      case 1 :
                total = BAKERY_BREAD * quantity ;
        break;

        case 2:
                total =  MEAT_SEAFOOD *quantity ;

            break;

        case 3:
                total =  PASTA_RICE *quantity ;

            break;

        case 4:
            total = SOUPS_CANNED * quantity;

            break;

        case 5:
            total = EGGS * quantity;
     
       if( total > 30 ){
        discount = DISCOUNT * total ;
         total = total - discount   ;

       }
            break;

            default :
              printf(" invalid input \n ");

              break ;
}
      return total ;

}
 int premium( int quantity ){
  
    int quantity1 , quantity2 ,quantity3 ,quantity4 ,quantity5
    int total = 0 ;
    char other ;

  do { 
 printf("Bakery and Bread: 3MAD \n");
 scanf("%d", &quantity1);
printf(". Meat and Seafood: 120 MADs\n");
 scanf("%d", &quantity2);
printf("Pasta and Rice: 5MAD \n");
 scanf("%d", &quantity3);
printf("Soups and canned drinks: 10 MAD\n ");
 scanf("%d", &quantity4);
printf(". Eggs: 1MAD \n");
 scanf("%d", &quantity5);

   total =  BAKERY_BREAD * quantity1 +  MEAT_SEAFOOD * quantity2 + PASTA_RICE * quantity3 + SOUPS_CANNED * quantity4 + EGGS * quantity5 ;
 printf(" do you want somthing eslse \n");
 scanf("%c" ,&other);
  
 } while ( other == 'y' || other == 'Y');

return total ;

}
   void Discount2(int *totalPrice) {

    int discount ;

    if (*totalPrice > 5000) {

    discount = *totalPrice * DISCOUNT1 ;

    *totalPrice = *totalPrice - discount ;

    } else if (*totalPrice > 2000) {

    discount = *totalPrice *  DISCOUNT2 ;

    *totalPrice = *totalPrice - discount ; 

    }
   
}
int main() {

    int type_customer, total = 0;
    
    welcom();

    type_customer = customer();
    
    if (type_customer == 1) {

        int item_type, quantity;

        menu();

        printf("Enter the number of items: ");
        scanf("%d", &quantity);

        printf("Enter the item type: ");
        scanf("%d", &item_type);

       total = calculate(quantity, item_type);

        printf("Total amount to be paid by the normal customer: %d MAD\n", total);

    } else if (type_customer == 2) {

        total = premium();

        Discount2(&total);

        printf("Total amount to be paid by the premium customer after discount: %d MAD\n", total);
    } else {
        printf("Invalid customer type.\n");
    }

    return 0;
}






