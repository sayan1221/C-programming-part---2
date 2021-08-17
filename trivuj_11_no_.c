#include<stdio.h>
int main (){
int i,j,n;

printf ("Enter size :");
scanf("%d",&n);

for (i=n;i>=1;i--){
for (j=1;j<=i;j++){
printf(" ");
}
for (j=1;j<=n+1-i;j++){
printf ("%d ",i);
//printf(" $");
}


printf("\n");
}

return 0;
}

    