#include<stdio.h>
int fac(int n){
int i,f=1;
for(i=1;i<=n;i++){
f=f*i;
}
return f;
}


int cal(int n){
int r,i,s=0,m;
while (n>0){
r=n%10;
m=fac(r);
s=s+m;
n=n/10;
}
return s;
}


int main(){
int n,p;
printf("Enter number :");
scanf("%d",&n);
p=cal(n);
printf("spacial charecter : %d\n",p);

if(n==p){
printf("\n %d is spacial charecter");
}
else {
printf("\n %d is not spacial charecter");
}

return 0;
}

