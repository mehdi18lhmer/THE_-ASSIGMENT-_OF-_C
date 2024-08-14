 #include <stdio.h>
 #include <string.h> 

int main(){

   int found = 0;

 char *arr[]={"mehdi", "immad", "khaliid", "aali", "elmahdi"};
 
  for (int i = 0 ; i< 5 ; i++){

    if( strcmp(arr[i] , "elmahdi") == 0){

      printf(" found this in %d steps ", i + 1)
        found = 1 ;
         break ;
    }else {

    return -1 ;

    }
    printf(" not found \n");

  }

  
  return 0;
}




