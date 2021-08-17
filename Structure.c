#include<stdio.h>
typedef struct student {
int roll,marks ;
char name[5];
}std;
int main (){
std s;
printf("Enter roll no:");
scanf("%d",&s.roll);
printf("Enter name :");
scanf("%s",&s.name);
printf("Enter marks ");
scanf("%d",&s.marks );
printf("Display Datails :\n");
printf("%d\n %s\n %d\n",s.roll,s.name,s.marks);
return 0;
}

    


    