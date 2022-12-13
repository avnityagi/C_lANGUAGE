#include<stdio.h>
#include<conio.h>

int main(){
 int n,rem=0,res=0,temp;
 printf("enter the number :");
 scanf("%d",&n);
  temp=n;
  while(n>0){
  rem=n%10;     
  res=res+(rem*rem*rem);          //for armstrong (rem*rem*rem)
  n=n/10;
  }  
  //printf("%d",res);
 if(temp==res){
    printf("the number is armstrong %d",res);
 }
 else {
    printf("the number is not armstrong number");
 }
    return 0;
}