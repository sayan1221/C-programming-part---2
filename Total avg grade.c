#include<stdio.h>
int main() {
float avg;
int a, b, c, d, e, sum;
char grade ;
printf("enter 5 no:") ;
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e) ;
sum=(a+b+c+d+e) ;
avg=(sum/5.0);
if(avg>=90)
grade='AA';
else if(avg>=80)
grade='E';
else if(avg>=60)
grade='A';
else if(avg>=40)
grade='B';
else 
grade='c';
printf("total marks =%d\t avg=%f\t grade=%c \n", sum, avg, grade) ;
return 0;
} 