#include <stdio.h>

int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={12,45,23,67,89,34};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=67;

    printf("Array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int result=linearSearch(arr,size,key);

    if(result!=-1){
        printf("Element %d found at position %d (index %d).\n",
               key,result+1,result);
    }
    else{
        printf("Element %d not found in array.\n",key);
    }

    return 0;
}