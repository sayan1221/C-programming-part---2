#include<stdio.h>
int per(int n){
int i,sum=0;
for(i=1;i<n;i++){
if(n%i==0){
// printf("factor : %d\n",i);
sum=sum+i;
}
}
//printf("\n perfact number : %d",sum);
return sum;
}

void cal(int x,int y){
int i;
printf("perfact number are:");
for(i=x;i<=y;i++){
if(per(i)==i){
printf("%d\n ",i);
}
}
}

int main(){
int x,y;
printf("Enter renge:");
scanf("%d%d",&x,&y);
cal(x,y);
return 0;
}





