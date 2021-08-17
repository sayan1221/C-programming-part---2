#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int c=0,j,k;
char st[100],v2[]={'I','A','E','O','U','\0'};
char v1[]={'i','a','e','o','u','\0'};

  printf("Enter a text: \n");
  gets(st);
    for(j=0;st[j]!='\0';j++){
    for(k=0;v1[k]!='\0',v2[k]!='\0';k++){
  if (st[j]==v1[k] || st[j]==v2[k])
     c++;
  }
  }
 printf("%d",c);

  return 0;
}

    