#include<stdio.h>
#include<stdlib.h>//this header is for calloc and exit function.
//#define max_numbers 100
int main(){
    float *element=0;
    int n;
    //we have to enter the the order of the element that we have to enter.
    printf("enter the number of element 1-100 ");
    scanf("%d",&n);
    //we have to allocate a location for n element we have to enter.
    element=(float*)calloc(n,sizeof(float));
    if(element==NULL){
        printf("Memory allocation failed");
        exit(0);}
        //we have to enter the element in the n order.
        for(int i=0;i<n;++i){ printf("so your %d element :",i+1);
            scanf("%f",&element[i]);
                                      }
                                                        
    
    //we have prepare this loop to present the biggest pointer in value
    float max = element[0];
    for(int i=1;i<n;++i){
        if(element[i]>max){
            max = element[i];
                            }
                               }        //#         printf("the biggest number is %i",*element);        #
         printf("the biggest number is %f",max);
         free(element);
       
    return 0;
}