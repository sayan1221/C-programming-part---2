#include<stdio.h>
int main () {
float qu, pr, total ;
printf(" Enter quantity and prince :");
scanf("%f%f", &qu, &pr ) ;
int dis, fp, d ;
printf ("enter discount :") ;
scanf("%d", &dis) ;
total=qu*pr;
printf ("Total price =%f\n ", total) ;
d =(total *dis)/100 ; 
printf("Discount =%d\n", d) ;
fp =total -d;
printf("Final payment =%d\n", fp) ;
return 0;
}  