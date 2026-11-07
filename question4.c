#include<stdio.h>

int main(){
    char name[50];
    int accno;
    float amount;
    FILE *fptr;
    printf("enter customer name:");
    fgets(name,50,stdin);
    printf("enter accounr num:");
    scanf("%d",&accno);
    printf("enter amount to withdraw");
    scanf("%f",&amount);
    fptr =fopen("bank_log.txt","a");
    if(fptr==NULL){
        printf("error opening file\n");
        return 1;
    }
    fprintf(fptr,"name: %s account:%d,amount:%.2f\n",name,accno,amount);
    fclose(fptr);
    printf("transaction successful\n");
    

        
    
    return 0;
   }