#include <stdio.h>

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void deleteElement(int arr[],int *size,int pos){
    int index = pos-1;
    for(int i=index;i<*size-1;i++){
        arr[i]=arr[i+1];
    }
    *size = *size-1;
}

int main(){
    int arr[10]={10,20,30,40,50};
    int size=5;
    int pos=3;

    printf("Original array:");
    printArray(arr,size);

    deleteElement(arr,&size,pos);

    printf("Array after deletion:");
    printArray(arr,size);

    return 0;
}
