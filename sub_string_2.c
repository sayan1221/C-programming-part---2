#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[100],t[100],s1[100];
int isEqual(int l){
int i;
for(i=0;i<l;i++){
if(t[i]!=s1[i])
return 0;
}
return 1;
}
int main(){

int i,j,f=0,l1,l2,k;
printf("enter string : ");
gets(s);
printf("enter search string : ");
gets(t);
for(l1=0;s[l1]!='\0';l1++);
for(l2=0;t[l2]!='\0';l2++);
for(i=0;i<l1;i++){
for(j=i,k=0;k<l2;j++,k++){
s1[k]=s[j];
}
s1[k]='\0';
// printf("%s\n",s1);
if(isEqual(l2)){
f=1;
break;
}
}
if(f==1)
printf("found\n");
else
printf("Not Found\n");


return 0;
}


    