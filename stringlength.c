#include<stdio.h>
#include<string.h>
int length(char*);
int main(){
    char nass[100]="alhamdolillah";
//    char *nass;
  //  nass=&str[100];
  int L=0;
  L=length(nass);
    printf("so the length of your string is%d",L);
    return 0;
}
       int i=0;
int length(char *nass){
    int ci3a=0;
        while(*nass!='\0'){
            ci3a++;//increnent the counter for each inrement counted
            nass++;//move to the next element
               } return ci3a;
                                    
    
}