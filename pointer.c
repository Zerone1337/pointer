#include<stdio.h>
int main(){
    int m=10;
    int *z=&m,n,o;
   
    printf("z stores the address of m=%p",z);
    printf("\n*z strores the value of m=%i",*z);
    printf("\n&m stores the address of m=%p",&m);
    printf("\n&n stores the address of n which is %p",&n);
    printf("\n&o stores the address of o which is %p",&o);
    printf("\n&z stores the adress of pointer z which is %p",&z);
    return 0;
    
}