#include<stdio.h>
int gcd(int a,int b){
if(a==0)
return a;
if(b==0)
return b;
if(a==b)
return a;
if(a>b)
return gcd(a-b,b);
return gcd(b-a,a);
}

int main(){
int res,no1,no2;
printf("Enter tow no: ");
scanf("%d%d",&no1,&no2);
res=gcd(no1,no2);
printf("GCD : %d \n ",res);
return 0;
}

