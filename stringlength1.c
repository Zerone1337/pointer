#include<stdio.h>
int length(char*);//function prototype
int main(){
    char str[100];
    int l;
    printf("please enter your text");
    fgets(str,sizeof str,stdin);//input the string from the user
    printf("thank you");
    
    l=length(str);
    printf("so the length of %s is %d",str,l-1);
    return 0;
                                                    }
int length(char *str){
    int ctr=0;
    while(*str!='\n'){
        ctr++;//increment the counter for each increment counted
        str++;//move to the next element
    }
    return ctr;//return the length of this string
}