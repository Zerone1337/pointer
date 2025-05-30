#include<stdio.h>
int main(){
 int m=29;
 int *ab;
 printf("address of m:%p",&m);
 printf("\nvalue of m:%i",m);
 ab=&m;
 printf("\ncaddress of pointer ab:%p",ab);
 printf("\ncontent of pointer ab:%i",*ab);
 m=34;
 printf("\naddress of pointer ab:%p",ab);
 printf("\ncontent of pointer ab:%i",*ab);
 m=7;
 printf("\naddress of m:%p",&m);
 printf("\nvalue of m:%i",m);
 return 0;
}