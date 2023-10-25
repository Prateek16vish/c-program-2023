#include <stdio.h>
#include <conio.h>
void main() {
int n,i;
printf("Enter no. to print it's table :");
scanf("%d",&n);
printf("Table is:");
for(i=1;i<=10;i++){
    printf("%d*%d=%d \n",i,n,i*n);
}
    getch();
}
