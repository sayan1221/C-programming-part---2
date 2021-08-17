#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char s1[100],s2[100];
int l=2;
printf("enter two string :");
gets(s1);
gets(s2);

strncat(s1,s2,l);
printf("2 string :%s",s1);
return 0;
}





