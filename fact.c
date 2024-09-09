#include<stdio.h>
int main(){
             int n;
             printf("Enter the Number ");
             scanf("%d",&n);
             int fact=1,i;
             for(i=1;i<=n;i++){
               fact*=i;
             }
             printf("The factorial of the entered numebr is %d ",fact);
}