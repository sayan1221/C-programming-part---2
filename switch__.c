
#include<stdio.h>
int p(int n){
int i;
for(i=2;i<n;i++){ 
if(n%i==0){
return 0;
} 
}
return 1;
}
int prime(int n){
int i,pr;
pr=p(n);
if(pr==1)
printf("%d is prime no",n);
else
printf("%d not prime",n);
return 0;
}
int fact(int n){
int i,f=1;
for(i=1;i<=n;i++){
f=f*i;
}
printf("factorial=%d",f);
return 0;
}
int oddeven(int n){
if(n%2==0){
printf("%d is even no ",n);
}
else{
printf("%d is odd no",n);
}
return 0;
}
int main (){
int n,ch;
printf("enter no:");
scanf("%d",&n);
printf("press 1: factorial\n press 2: prime\n press 3: odd_even\n press 0: exit\n");
scanf("%d",&ch);
switch(ch){
case 1 :
fact(n);
break;
case 2:
prime(n);
break;
case 3:
oddeven(n);
break;
case 0:
printf("thank you");
exit(n);
default:
printf("enter valid no\n");
}
return 0;
}


    