#include <stdio.h>


float withdrow(float *balance ) {

    int amount_withdrow  ;
    printf(" how much you want to withdrow ?? \n");
    scanf("%f", &amount_withdrow );
    
    if( amount_withdrow <= *balance){

       *balance = *balance - amount_withdrow ; 

    }else{
        printf(" this is impossible \n");
    }
    
}

int main () {

float balance ;

printf("what is your curent balance?? \n");
scanf("%f", &balance);

withdrow( &balance);

 printf(" the balace is : %f", balance);
    return 0 ;
}