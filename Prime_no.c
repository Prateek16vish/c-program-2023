#include <stdio.h>
#include <conio.h>
void main() {
int n,i,c=0;
printf("Enter number to find prime number :");
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(n%i==0){
        c=c+1;
    }
}
if(c==2){
printf("%d is prime number \n",n);
}
else{
    printf("%d is not a prime number ",n);
}
    getch();
}
