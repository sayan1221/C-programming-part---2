#include<stdio.h>
int main () {
int a, b;
printf("Enter 2 no :") ;
scanf("%d%d", &a, &b) ;
a=a+b;
b=a-b;
a=a-b;
printf("A=%d\t B=%d\n", a, b) ;
return 0;
} 