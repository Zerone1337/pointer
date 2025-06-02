#include<stdio.h>
int main(){
    int array[7]={2,3,21,45,12,65,9};
    int size=sizeof(array)/sizeof(array[0]);
    //int *place;
    printf("please enter the number order in the array\n");
    //void function(){
    for(int i=0;i<=size;i++){
        //place=&array[i];
        scanf("%i",&i);
        printf("so your elemets =%i\n",*(array+i));
    }
    //    function();

    
        return 0;
}