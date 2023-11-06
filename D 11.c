#include<stdio.h>
int main(){
    int arr[]={20,30,40,2,5,4,99,21,0,};
    int stop=9;
    for(int i=0;i<stop;i++){
        for(int j=0;j<stop-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<stop;i++){
        printf("%d\n",arr[i]);
    }
}