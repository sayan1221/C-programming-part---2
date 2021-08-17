#include<stdio.h>
int fibo(int n ){
    if(n<=1)
    return n;
    return(fibo(n-1)+fibo(n-2));
 }
int main(){
    int n,res;
    printf("Enter a no :");
    scanf("%d",&n);
    res=fibo(n);
    printf("Fibo :: %d",res);
  
 return 0;
}

    