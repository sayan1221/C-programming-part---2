#include<stdio.h>
int main () {
float qu, pr, total ;
int dis, fp, d ;
printf(" Enter quantity and prince and enter discount:");
scanf("%f%f%d", &qu, &pr, &dis ) ;
total=qu*pr;
d =(total *dis)/100 ; 
fp =total -d;
printf ("Total price =%f\n Discount =%d\n Final payment =%d\n", total, d, fp) ; 
return 0;
}  