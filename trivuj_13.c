#include<stdio.h>
int main(){
int x,j,h,n;
printf("Enter size:");
scanf("%d",&n);
for(x=1;x<=n;x++){
for(j=1;j<=n-x;j++){
printf (" ");
}
for(j=1;j<=x;j++){
printf(" %d",j);
}
printf("\n");
}
return 0;
}

