#include<stdio.h>
int main() {
    int arr[4] = {5, 4, 3, 8};
int element,count=0;
printf("ENTER THE ELEMENT TO BE SEARCHED:\n");
    scanf("%d",&element);
    for(int i=0;i<4;i++){
        if(arr[i]==element){
            printf("ELEMENT FOUND IN THE INDEX:%d",i);
            count++;
            break;
        }
    }
if(count==0){
    printf("ELEMENT NOT FOUND!\n");
}
}