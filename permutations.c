#include<stdio.h>
#include<string.h>
int permutations(char *str,int l,int r);
void swap(char *a,char *b);
int main(){
    char str[5]="abcd";
    //n is the number of elements that str have.
    int n=strlen(str);
    permutations(str,0,n);
    printf("%s\n",str);
    return 0;
}
int permutations(char *str,int l,int r){
    if(l==r){
        printf("%s\n",str);
        //printf("%d\n",l);
    }else{
     for(int i=l;i<r;i++){
        swap(&str[l],&str[i]);
        permutations(str,l+1,r);
        swap(&str[l],&str[i]);
      /* char item=str[index];
        str[index]=str[i];
       str[index]=item;*/
       //permutations(str,size);
        //return str;
}
  } 
    }
   

//it's better to give each function just one mission
void swap(char *a,char *b){
    int item=*a;
    *a=*b;
    *b=item;
}