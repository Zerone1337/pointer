#include<stdio.h>
#include<string.h>
int bigger(int number,int largest,char end);
int main(){
    int num1=0,Lar=1;
    char stop;

    bigger(num1,Lar,stop);
    return 0;
    }

int bigger(int number,int largest,char end){
 for (int i=0;i<100;i++){
        printf("the number %d that we have is = \n",i);
        scanf("%i",&number);
        if(number>largest)
           largest=number; 
            printf("so your biggest number is %d\n",largest);}
            bigger(number,largest,end);
            scanf("%c",&end);                                       
        if(end='s') {
         return 0;           }
    }
         