#include <stdio.h> 
void main() { 
int n,i,j;
printf ("Enter size:");
scanf("%d",&n);

for(i=1;i<=n;i++){
for(j=i;j>=1;j--){

printf("  ");
}
for(j=1;j<=n+1-i;j++){
printf(" #");
}
printf ("\n");
}
}

    