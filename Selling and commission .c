#include<stdio.h>
int main () {
float selling, commission ;
printf(" enter total selling amount :") ;
scanf("%f", &selling ) ;
commission = (selling*25)/100;
printf (" salesman commission =%f\n", commission) ;
return 0;
}  