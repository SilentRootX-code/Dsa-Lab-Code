#include <stdio.h>

int linearSearch(int *arr,int size,int target){
    for(int i=0;i<size;i++){
        if(*(arr+i) == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {12,45,23,67,89,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 67;

    int result = linearSearch(arr,size,key);

    if(result != -1){
        printf("Element %d found at index %d.",key,result);
    }
    else{
        printf("Element %d not found in array.",key);
    }

    return 0;
}