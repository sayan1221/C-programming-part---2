#include<stdio.h>
int main () {
int a, b, c;
printf("Enter 2 no :") ;
scanf("%d%d", &a, &b) ;
c=a;
a=b;
b=c;
printf("A=%d\t B=%d\n", a, b) ;
return 0;
} 