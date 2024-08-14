#include<stdio.h>

 int main (){
int a = 3, b = 6, c = 9;
int *p1 = &a, *p2 = &b, *p3 = &c;
int **pp1 = &p1, **pp2 = &p2, **pp3 = &p3;
**pp1 = **pp2 + **pp3;
pp2 = pp3; **pp2 = **pp1 - *p1;
pp1 = &p3; **pp1 = **pp3 + *p2;
printf("%d %d %d\n", a, b, c);



    return 0 ;
 }