#include<stdio.h>
#include<string.h>
int main(){
    char arr[10][50];
    char temp[50];
    for (int i=0;i<10;i++){
        printf("name %d\n",i+1);
        fgets(arr[i],50,stdin);
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(strcmp(arr[i],arr[i+1])>0){
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[i+1]);
                strcpy(arr[i+1],temp);
            }
        }

    }
printf("sorted names\n");
for(int i=0;i<10;i++){
    printf("%s",arr[i]);
}
    return 0;
   }



