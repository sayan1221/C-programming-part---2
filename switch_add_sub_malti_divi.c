
#include<stdio.h>
int main(){
float a, b, c;
int ch;
printf("Enter two no:");
scanf("%f%f", &a,&b);
printf("press 1 to add\n press 2 to sub\n press 3 to multi\n press 4 to divi\n");
scanf("%d",&ch);
switch(ch){
case 1:
c = a + b;
printf("%f is add",c);
     break;  
case 2:
c = a - b;
printf("%f is sub",c);
break;
case 3:
c=a*b;
printf("%f is multi",c);
break;
case 4:
c=a/b;
printf("%f is divi", c);
break;
default:
printf("you have passed a wrong key");

} 
return 0;
}