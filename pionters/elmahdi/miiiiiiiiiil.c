#include <stdio.h>
#define DISCOUNT 0.1

void welcom(){
 printf(" Welcome to our place! \n");
 printf(" We hope you like our lovely green sophisticated shop parlor\n");
 printf(" Feel free to set up wherever you like, but please avoid playing loud music and
 don't bring your beverages because we have everything \n");
 printf("If you want a delivery order, check out our mobile app : shope.app-store.\n ");
}

 int customer_type(){

 int choise ;
printf(" which type of customer you are ?? \n");
printf("1-> normal \n");
printf("2-> premim \n");
scanf("%d", &choise);

return choise ;

 }

  void menu(){
    printf("1. Bakery and Bread: 3MAD \n");
    printf("2. Meat and Seafood: 120 MADs\n ");
    printf("3. Pasta and Rice: 5MAD \n");
    printf("4. Soups and canned drinks: 10 MAD\n");
    printf("5. Eggs: 1MAD \n");
  }
  
    float Bakery(int items ){
        float total;
     total = items * 5 ;
     return total ;

    }

     float meat(int items ){
        float total;
        total = items * 120 ;
        return total ;
     }

      float pasta(int items){
        float total;
        total  = items * 5 ;
        return total ;
      }

      float soups(int items){
         float total;
          total = items * 10 ;
          return total ;

      }
     float discount( int items , float total ){

      eggs(items , total);
      if( items >= 30 ){
        total -=total *  DISCOUNT ;
        return total ;
      }
    
     }
        float eggs(int items  ){
            total = items * 1 ;
            return total ;
        }

 void Normal_option( int items  ){
    
    float total = 00.00;
    int type;
   menu(); 
      printf(" wich of the menu you want ?\n");
      scanf(" %d", &type);
      switch( type){
   case 1 :  
    tota = printf(Bakery(int items ));
                 break;
   case 2 :
    total = printf(meat(int items));
                  break;
   case 3 :
    total = printf(pasta(int items ));
                  break;
   case 4 :
    total = printf(soups(int items  ));
                  break;
   case 5 :
    total = printf(eggs(int items ));
                  break;

    default :
          printf( "invalid input \n");
          break ;
      }
 
    total = discount( items , total );
   printf(" the total  %f", total );

  void premim_opion(int items){

    menu();


  }





 }
       
   int main(){

  int choice , items ;

 choice = customer_type();

if ( choice == 1 ){

 printf(" which items you want \n");
 scanf("%d", &items);

 Normal_option( items);

}else if(choice == 2){

  

}


   

    return 0 ;
   }