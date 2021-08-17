#include<stdio.h>
int isprime (int n) {
    int i;
    for(i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
void rengeprime(int l,int u) {
    int i;
    printf("prime no are \n");
    for(i=l; i<=u; i++) {
        if(isprime(i)==1) {
            printf("%d\n",i);
        }
    }
}
int main() {
    int l,u;
    printf("Enter renge :");
    scanf("%d%d",&l,&u);
    rengeprime(l,u);
    return 0;
}


