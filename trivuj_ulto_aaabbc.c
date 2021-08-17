#include <stdio.h>
int main (){
int n,i,j;
char x='a';
printf ("Enter size : ");
scanf("%d",&n);

for(i=n;i>=1;i--){
for(j=1;j<=i;j++){
printf ("%c",x);
}
printf("\n");
x++;
}







return 0;
}
    