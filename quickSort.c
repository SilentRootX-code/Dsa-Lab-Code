#include <stdio.h>

void Swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int uway[],int low,int high){
    int pivot=uway[high];
    int i=(low-1);

    for(int j=low;j<high;j++){
        if(uway[j]<=pivot){
            i++;
            Swap(&uway[i],&uway[j]);
        }
    }

    Swap(&uway[i+1],&uway[high]);

    return (i+1);
}

void quickSort(int uway[],int low,int high){
    if(low<high){
        int pi=partition(uway,low,high);

        quickSort(uway,low,pi-1);
        quickSort(uway,pi+1,high);
    }
}

int main(){
    int data[]={6,9,7,8,1,9,5};
    int size=sizeof(data)/sizeof(data[0]);

    quickSort(data,0,size-1);

    printf("Sorted Array\n");

    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }

    return 0;
}