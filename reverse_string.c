#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int i,j,l=0;
char st[100],s[100];
printf("Enter a string :");
gets(st);
for(i=0;st[i]!='\0';i++){
l++;
}
for(i=0;i<=l;i++){
s[i]=st[l-i-1];
}
s[i]='\0';
printf("Revarse : %s",s);
return 0;
}



