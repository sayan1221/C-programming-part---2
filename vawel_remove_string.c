#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char s1[100],s[100],v[5]={'a','e','i','o','u'};
int i,j=0,f=1,k=0 ;
printf("enter a string :");
gets(s1);
for(i=0;s1[i]!='\0';i++){

for(j=0;j<5;j++){
if(s1[i]==v[j]){
f=0;
break;
}
}
if(f==1){
s[k]=s1[i];
k++;
}

}
s[k]='\0';
printf("display ->%s\n",s);
return 0;
}





