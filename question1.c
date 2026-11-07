#include<stdio.h>
#include<string.h>
int main(){
    char comment[50];
    char* p;
    char updated[100];
    printf("enter the comment");
    fgets(comment,50,stdin);
    fputs(comment,stdout);
    fputs("\n",stdout);
    int len=strlen(comment);
    printf("%d\n",len);
    if(strstr(comment,"good")){
        printf("found\n");
    }
    if(strstr(comment,"bad")){
            printf("found\n");
        }
   p=strstr(comment,"bad");
   if(p!=NULL){
    int i=p-comment;
    strncpy(updated,comment,i);
    updated[i]='\0';
    strcat(updated,"not good");
    strcat(updated,p+3);
    printf("updated:%s\n",updated);}
    return 0;
   }



