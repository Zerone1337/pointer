#include<stdio.h>
int main(){
    int num1,num2;
    int *ptr1,*ptr2;
     
    ptr1=&num1;
    ptr2=&num2;
    scanf("%d",ptr1);
    scanf("%d",ptr2);
    int sum=*ptr1+*ptr2;
    //int total=*ptr1+*ptr2;
    printf("so the total of num1+num2=%i",sum);
    return 0;
}