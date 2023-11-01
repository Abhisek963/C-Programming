#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int numbers[size];

    for(int i=0;i<size;i++){
        printf("Enter the element in the index:%d\n",i);
        scanf("%d",&numbers[i]);
    }
    for(int j=0;j<size;j++){
        printf("%d\n",numbers[j]);
    }
}