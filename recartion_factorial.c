#include<stdio.h>
int fact(int n){
if(n==0 || n==1)
return 1;
return (n*fact(n-1));
}

int main(){
int result,n;
printf("Enter a no: ");
scanf("%d",&n);
result=fact(n);
printf("Factorial :%d \n", result);
return 0;
}
    