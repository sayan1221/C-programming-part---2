#include<stdio.h>
#include<string.h>
int main (){
char st[100],xy[100];

printf ("Enter 2 string :");
gets(st);
gets(xy);
strcat(st,xy);
printf("final string : %s\n",st);

return 0;
}
