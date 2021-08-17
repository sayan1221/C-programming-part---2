#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char s1[100],s2[100],s[200];
printf("enter two string :");
gets(s1);
gets(s2);

strcat(s1,s2);
printf("2 string :%s",s1);
return 0;
}





