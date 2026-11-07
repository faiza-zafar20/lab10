#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char domain[100];
    char* p;
printf("enter the email");
fgets(str,100,stdin);
if(strstr(str,"@")==NULL){
    printf("invalid email\n");}
else{
    p=strstr(str,"@");
    strcpy(domain,p+1);
    printf("domain: %s\n",domain);
}


    return 0;
   }