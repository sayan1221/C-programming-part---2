#include<stdio.h>
int searchv(int n){
int i,*p,sr,x=0;
p=(int*)malloc(n*sizeof(int));
printf("enter %d number :",n);
for(i=0;i<n;i++){
scanf("%d",(p+i));
}
printf("enter search value :");
scanf("%d",&sr);
for(i=0;i<n;i++){
if(*(p+i)==sr){
x=1;
break;
}
}
if(x == 1){
printf("%d is found position are %d :",sr,i+1);
}
else{
printf("%d is not found ",sr);
}
return 0;
}

int main(){
int n,z; 
printf("enter size :");
scanf("%d",&n);
searchv(n);

return 0;
}
