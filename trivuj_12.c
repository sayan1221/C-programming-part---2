/* Print Pattern

5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1

*/

#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,k;
	clrscr();
	printf("Enter the value:\n");
	scanf("%d",&n);
for(i=n;i>=1;i--){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" %d",i);
		}
		printf("\n");
	}
	getch();
}



