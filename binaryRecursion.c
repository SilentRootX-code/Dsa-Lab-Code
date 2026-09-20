#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key){
    if(low > high){
        return -1;
    }

    int mid = low + (high - low)/2;

    if(arr[mid] == key){
        return mid;
    }

    if(key < arr[mid]){
        return binarySearchRecursive(arr, low, mid-1, key);
    }

    return binarySearchRecursive(arr, mid+1, high, key);
}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    printf("Sorted Array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    int result = binarySearchRecursive(arr,0,size-1,key);

    if(result != -1){
        printf("Element %d found at position %d (index %d).\n",
               key,result+1,result);
    }
    else{
        printf("Element %d not found in array.\n",key);
    }

    return 0;
}