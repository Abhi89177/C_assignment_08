//assignment : 08
//15. Write a C program to find reverse of any number using recursion.
 
#include<stdio.h>
int sum=0,rem;
int main(){
   int num,revNum;
   printf("enter number: ");
   scanf("%d",&num);
   revNum=revNumFunction(num);//calling function to reverse the given number
   printf("the number after reverse :%d",revNum);
   return 0;
}

int revNumFunction(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      revNumFunction(num/10);
   }
   else
      return sum;
}


