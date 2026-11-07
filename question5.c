#include<stdio.h>

int main(){
    FILE*fptr;
    int roll_no, marks;
    char name[50];
    fptr = fopen("marks.txt","r");
    if(fptr==NULL){
        printf("erreor file not found");
        return 1;
    }
    printf("roll no\tname\tmarks\n");
    while(fscanf(fptr,"%d %s %d",&roll_no,name, &marks)!=EOF){
        printf("%d\t%s\t%d\n",roll_no,name,marks);

    }
    fclose(fptr);
    return 0;}

    

        
    
    