#include<stdio.h>
#include<conio.h>
void main(){
  int i,j,k,n;
printf("Enter n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
   for(j=1;j<=i;j++){
     printf("*");
   }
   for(k=1;k<=i;k++){
    printf("#");
    }
    printf("\n"); 
  }
  getch();
}
