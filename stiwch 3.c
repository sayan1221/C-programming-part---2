#include<stdio.h>

int prime(n){
int i;
for(i=2;i<n;i++){
if(n%i==1){
}
if(n==1)
printf("%d is prime no",n);
else
printf("%d is not prime no",n);
return 0;
}

int main(){
int n,f,ch;
printf("Enter no:");
scand("%d",&n);
printf("press 1 : factorial\n press 2 :prime\n press 3 : odd even\n press 0 : to exit\n");
scanf("%d",&ch);
switch(ch){
case 1 :
f:fact(n);
printf("fact of %d=%d\n",n,f);
brake ;
case 2 :
prime(n);
brake;
case 3 :
oddeven(n);
brake;
case 0 :
exit(n);
default :
printf("plese enter valid option \n");
}
return 0;
}