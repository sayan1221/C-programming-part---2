/* Print Pattern

1 1 1 1 1
  2 2 2 2
    3 3 3
      4 4
        5

*/

#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,n;
printf("Enter size: ");
scanf("%d",&n);
clrscr();
for(i=1;i<=n;i++){
for(k=1;k<i;k++){
			printf(" ");
		}
for(j=i;j<=n;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}

