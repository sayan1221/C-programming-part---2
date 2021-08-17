#include <stdio.h> 
int rev(int n) {
int rev=0,r;
while (n!= 0) { 
r = n % 10; 
rev = rev * 10 + r; 
n /= 10;
 } 
return rev;
} 
int main() { 
int n, s; 
printf("Enter an integer: "); 
scanf("%d", &n); 
s=rev(n) ;
printf("Reversed number = %d", s); 
return 0; 
} 
