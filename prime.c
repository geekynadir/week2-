#include<stdio.h>
void prime(int a){
 if(a==1)
 printf("1 is neither prime nor composite");
 else{
    int count=0;
     for(int i=2;i<a;i++){
       if(a%i==0){
        count=1;
        break;
    }
}
    if(count==0)printf("The number is prime ");
    else  printf("The numebr is not prime ");
 }
}
int main(){
int n;
printf("Enter a number\n");
scanf("%d",&n);
prime(n);
}