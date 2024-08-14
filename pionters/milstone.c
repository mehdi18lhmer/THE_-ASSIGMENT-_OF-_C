#include <stdio.h>
#include <string.h>


 void welcom (void){ // fuction for welcom the customer 

printf("Welcome to our pizza place!
We hope you like our lovely green sophisticated pizza parlor!
 Feel free to set up wherever you like, but please avoid playing loud music and
don't bring your beverages because we have everything.
If you want a delivery order, check out our mobile app : pizza.app-store."
)
 }

 int customer_type (int c){ // c =cutomer
      int customer ;
 printf("which of the customer you are ?? \n");
 printf(" 1 -> normal ");
 printf(" 2 -> normal ");
 scanf("%d" , &customer);
   return customer ;

 }

 void menu(void){
    printf(" 1 /the Pizza Margarita: 37MAD");
    printf(" 2/ Pizza Margarita: 37MAD");
    printf(" 3 / Pizza Mix (ground beef + chicken): 70MAD");
    printf(" 4 / Family pizza: 150MAD");
   
 }

int normal_option(int choise , int quantity  ){
    if( choise == 1){
     return 37 * quantity ;
    }else if( choise == 2){
        return 50 * quantity ;
    }
    

}


² 



  