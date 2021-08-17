 #include<stdio.h> 


int main(){
int n,i,j,t,x,a[100];
printf ("enter size:") ; 
scanf("%d",&n);
printf("Enter %d elements : \n",n);
  for(i=0;i<n;i++){
scanf("%d",&a[i]);
}


printf("press 1 to asceding \n");
printf("press 2 to desceding ");
scanf("%d",&x);


 if(x==1){

for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
} 
printf("\n Accessing order : \n");
   for(i=0;i<n;i++){
printf(" element - %d : %d \n",i+1,a[i]);
}         
}

else if (x==2){    
  for (i=0;i<n;i++){
for(j=i+1;j<n;j++){
if (a[i]<a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
} 
printf("\n descending order : \n");
   for(i=0;i<n;i++){
printf(" element - %d : %d \n",i+1,a[i]);
}        

}
}


 



