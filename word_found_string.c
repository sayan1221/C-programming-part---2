#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char st[100],t[100],x[100];
int isequal(){
int l1,l2;
for(l1=0;x[l1]!='\0';l1++);
for(l2=0;t[l2]!='\0';l2++);
int i;
if(l1!=l2)
return 0;
for(i=0;i<l1;i++){
if(t[i]!=x[i])
return 0;
}
return 1;
}


int main(){
int i,j,l1,l2,k,f=0;
printf("Enter a string :");
gets(st);
printf("Enter search string :");
gets(t);
for(l1=0;st[l1]!='\0';l1++);
for(l2=0;t[l2]!='\0';l2++);
for(i=0;i<l1;i++){
for(j=i,k=0;st[j]!=' ';j++,k++){
if(st[j]==' '){
break;
}
x[k]=st[j];

}
x[k]='\0';

printf("%s \n",x);
if(isequal()){
f=1;
break;
}
i=j;
}

if(f==1)
printf("found \n");
else
printf("not found");
return 0;
}


