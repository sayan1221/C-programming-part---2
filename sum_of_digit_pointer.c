#include <stdio.h> 
int sumdigit (int n){
int s=0,r;
while (n>0){
r=n%10;
s=s+r;
n=n/10;
}
return s;
}
int main () { 
int n,i, *p; 
printf("Enter size: "); 
scanf("%d",&n); 
p=(int*)malloc(n*sizeof(int));
for (i=0;i<n;i++){
printf("enter value:");
scanf("%d",(p+i));
}
printf ("store list:\n");
for (i=0;i<n;i++)
printf ("%d\t",*(p+i));
for(i=0;i<n;i++){
*(p+i)=sumdigit(*(p+i));
}
printf ("\n sum of digit list and Address :\n");
for(i=0;i<n;i++){
printf ("%d \t %d \n",*(p+i),(p+i));

}
return 0;
}




    