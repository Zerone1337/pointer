#include<stdio.h>
long addtwonumbers(long *,long*);
int main(){
   long num1,num2;
    long *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("please enter your first");
    scanf("%ld",ptr1);
    printf("it will be a kind from that you enter your second number\n");
    scanf("%ld",ptr2);
    long sum=addtwonumbers(ptr1,ptr2);
    printf("so the sum of num1+num2=%ld",sum);
    return 0;
}
long addtwonumbers(long *num1,long *num2){
long sum=*num1+*num2;
return sum;


}