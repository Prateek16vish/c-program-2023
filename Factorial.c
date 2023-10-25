#include <stdio.h>
#include <conio.h>
void main() {
int n,i,m=1;
printf("Enter number to find factorial of n :");
scanf("%d",&n);
for(i=n;i>=1;i--){
    m=m*i;
}
printf("Factorial is: %d \n",m);
    getch();
}
