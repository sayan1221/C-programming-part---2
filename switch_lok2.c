 #include<stdio.h> 


int main(){
int n,i,j,t,ch,*p;
printf ("enter size:") ; 
scanf("%d",&n);
printf("Enter %d elements : \n",n);
  for(i=0;i<n;i++){
printf(" element %d : ",i+1);
scanf("%d",(p+i));
}


printf("press 1 to asceding \n");
printf("press 2 to desceding \n");
printf("press 0 to exit \n");

scanf("%d",&ch);


switch (ch){


case 1:

for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (*(p+i)>*(p+j)){
t=*(p+i);
*(p+i)=*(p+j);
*(p+j)=t;
}
}
} 
printf("\n Accessing order : \n");
   for(i=0;i<n;i++){
printf("element %d : %d \n",i+1,*(p+i));
printf("Address   :  %d\n",(p+i));
}         
break ;


case 2:
  for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (*(p+i)<*(p+j)){
t=*(p+i);
*(p+i)=*(p+j);
*(p+j)=t;
}
}
} 
printf("\n descending order : \n");
   for(i=0;i<n;i++){
printf("element %d : %d \n",i+1,*(p+i));
printf("Address   :  %d\n",(p+i));
}        
break ;


case 0:
printf("thank you bye bye");
break ;

default: 
printf("Enter valid number");


}
}

 



