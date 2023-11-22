#include<stdio.h>
int main(){
    char file_name[100];
    char user_data[100];
    printf("ENTER THE FILE NAME:\n");
    gets(file_name);
    FILE *fp;

    fp=fopen("file_name","a");

    if (fp!=NULL){
        printf("FILE OPENED!\n");
        printf("ENTER SOMETHING TO BE SAVED IN FILE:\n");
        gets(user_data);
        fprintf(fp,"%s",user_data);
        printf("DATA SAVED IN FILE");
        fclose(fp);
    }
    else {
        printf("FILE NOT FOUND !\n");
    }
}