#include<stdio.h>
int reverse(int n){
  int rev=0;
  int a=n;
  if(n<0)  printf("please Enter positive integers");

    else{
     while(n>0){
      int r=n%10;
      rev=rev*10+r;
      n/=10;
     }
  }
  return rev;
}
int main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("The original number is %d ",n);
printf("\nAnd its reverse is %d",reverse(n));
}