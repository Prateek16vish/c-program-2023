#include <stdio.h>
#include <conio.h>
void main() {
int n,i,m=1;
printf("Enter number to find factorial of n :");
scanf("%d",&n);
printf("Factorial is:");
for(i=n;i>=1;i--){
    m=m*i;
}
printf("%d \n",m);
    getch();
}
