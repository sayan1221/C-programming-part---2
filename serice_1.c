#include<stdio.h>
int main(){
int i,n,s=0,x=0;
printf("enter a no :");
scanf("%d",&n);
for(i=1;i<=n;i++){
s=s+i;
x=x+s;

}
printf("%d",x);

return 0;
}


