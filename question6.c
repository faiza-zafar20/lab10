#include<stdio.h>
#include<string.h>
int main(){
    char username[50],password[50];
    char fileuser[50], filepass[50];
    FILE *fptr;
    printf("enter username");
    scanf("%s",username);
    printf("enter passsword");
    scanf("%s",password);
    fptr =fopen("credentials.txt", "r");
    if(fptr==NULL){
        printf("error");
        return 1;
    }
    fscanf(fptr,"%s %s", fileuser, filepass);
    if(strcmp(username,fileuser)==0 && strcmp(password,filepass)==0){
        
        printf("login successful\n");
    }
    else{
        printf("login failed\n");

    }
    fclose(fptr);

    
    return 0;}

    