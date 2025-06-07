#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);
int exchange(int *,int);
int main(){
    int n=0;
    int num[100];
    
    //we have to to input the number tof elements we opught to enter
    printf("please input the number of elemenets that you want to enter in this array");
    scanf("%d",&n);
     
            for (int i=0;i<n;i++){
              //we need a pointer where can store num array
               //int *item;
               //item=(int*)calloc(n,sizeof(int));
               //item=&num;
                //you need to enter input the number that to use as index
                printf("please enter your numbers:");
                scanf("%d",&num[i]);
                //numS=num[i];
                //num++;
              
            }//print the element of the array to make sure that what we had entered are correct.
            printf("so the array elements are :");
            for(int i=0;i<n;i++){
            printf(" %d ",num[i]);
                      
                     } exchange(num,n);
                      
            
                return 0;
                                       }
void swap(int *a,int *b){
    if (*a<*b) {
        int item=*a;
        *a=*b;
        *b=item;
                     }
}
              int exchange(int *num,int n){
              //int i=0,j=n;
              printf("your swap array is:");
              for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                   // while(num[i]!=num[j]){}
                                      swap(&num[i],&num[j]);
              
                 }
                 printf("%d ",num[i]);
                    }
              
              //return num[n];
                            }
