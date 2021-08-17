#include <stdio.h> 
void main() { 
int n,i,j;
printf ("Enter size:");
scanf("%d",&n);

for(i=n;i>=1;i--){
for(j=0;j<i;j++){

printf("  ");
}
for(j=1;j<=n+1-i;j++){
printf(" #");
}
printf ("\n");
}
}

    