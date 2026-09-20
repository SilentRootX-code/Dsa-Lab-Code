#include <stdio.h>

void printArray (int arr[],int size) {
    for (int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insert (int arr[],int *size,int element,int pos){
    for (int i=*size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element;
    *size = *size +1;
}

int main(){
    int arr[10]={10,20,30,40};
    int size=4;
    int element=25;
    int pos = 3;

    printf("Original array:");
    printArray(arr,size);

    insert(arr,&size,element,pos);

    printf("Array after insertion:");
    printArray(arr,size);

    return 0;
}