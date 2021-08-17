#include<stdio.h>
typedef struct student {
int roll;
int marks;
char name[50];
}std;
void init (std s[],int n){
int i;
for (i=0;i<n;i++){
printf("Enter roll:");
scanf("%d",&s[i].roll);
printf("Enter name:");
scanf("%s",&s[i].name);
printf("Enter marks:");
scanf("%d",&s[i].marks);
}
}

int maxmarks(std s[],int n){
int i,max=-1,pos=-1;
for(i=0;i<n;i++){
if(s[i].marks>max){
max=s[i].marks;
pos=i;
}
}
return max;
}
int displaymax(std s[],int n,int val){
int i;
for (i=0;i<n;i++){
if(s[i].marks==val){
printf("\t display of the topper \n Roll:%d \n Name:%s \n Marks:%d",s[i].roll,s[i].name,s[i].marks);
}
}
}
int main(){
std s[100];
int n,mx;
printf("Enter size:");
scanf("%d",&n);
init(s,n);
mx=maxmarks(s,n);
displaymax(s,n,mx);
return 0;
}


