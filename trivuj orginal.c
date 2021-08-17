#include <stdio.h> 
int main() { 
int a,b,c; 
printf("Enter 3 integer no : "); 
scanf("%d%d%d",&a,&b,&c); 

if (a==b && b==c){
printf("somobahu trivuj ");
}
else if (a==b || a==c || b==c){
printf("dhisomobahu ");
}

else {
printf("bisomobahu");
}
return 0;
}




