//first latter big 
//and other latter small
//ex- AMi saYaN
// - aMI sAYAN

#include <stdio.h>
int main (){
int i;
char st[100];
printf("Enter any string : ");
gets(st);
for(i=0;st[i]!='\0';i++){

if(i==0){
if(st[i]>='A' && st[i]<='Z')
st[i]=st[i]+32;
continue;
}


if(st[i]==' '){
i++;
if(st[i]==' '){
i++;
}
if(st[i]>='a' && st[i]<='z')
st[i]=st[i]-32;
}
else{
if(st[i]>='A' && st[i]<='Z')
st[i]=st[i]+32;
}
}


printf("Toggle case are :\n %s",st);
return 0;
}
    