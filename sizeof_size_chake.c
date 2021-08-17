#include <stdio.h> 
int main(){
int a;
float b;
long c;
double d;
long long e;
long int f;
/*
printf("Enter 2 number:");
scanf("%d%d",&a,&b);
*/
printf("integer : %lu\n",sizeof(a));
printf("float : %lu\n",sizeof(b));
printf("long : %lu\n",sizeof(c));
printf("double : %lu\n",sizeof(d));
printf("long long : %lu\n",sizeof(e));
printf("long int : %lu\n",sizeof(f));
return 0;
}