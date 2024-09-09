#include<stdio.h>
int fibo(int a){
 if(a==0 || a==1){
 return a;
 }
 else{
int b=fibo(a-1)+ fibo(a-2);
return b;
}
}
int main(){
  int n,i;
  printf("Enter the number upto which u want to find the fibonacci sequence\n");
  scanf("%d",&n);
  for(i=0;i<=n;i++){
   printf("%d ",fibo(i));
  }
}