#include<stdio.h>
int main(){
    int m=300;
    float fx=300.600006;
    char cht='z';
    //using & operator
    printf("address of m:%p\n",&m);
    printf("address of fx:%p\n",&fx);
    printf("address of cht:%p\n",&cht);
    //using & and * operator
    printf("value at address of m:%i\n",*(&m));
    printf("value at address of fx:%i\n",*(&fx));
    printf("value at address of cht:%c\n",*(&cht));
    //using only pointer variable
    int *M;
    float *FX;
    char *Cht;
    M=&m,
    FX=&fx;
    Cht=&cht;
    printf("address of m:\n%p",M);
    printf("address of fx:/%p\n",FX);
    printf("address of cht:%p",Cht);
    //Using only pointer operator
    printf("value at address of m:%i\n",*M);
    printf("value address of fx:%f\n",*FX);
    printf("value at address of cht=%c\n",*Cht);
    return 0;
    

}