#include <stdio.h>

void bubbleSort(int uway[],int size){
    for(int step=0;step<size-1;++step){
        int swapped=0;

        for(int i=0;i<size-step-1;++i){
            if(uway[i]>uway[i+1]){
                int temp=uway[i];
                uway[i]=uway[i+1];
                uway[i+1]=temp;
                swapped=1;
            }
        }

        if(swapped==0){
            break;
        }
    }
}

int main(){
    int size;
    printf("Enter number of elements:");
    scanf("%d",&size);

    int data[size];

    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
    }

    bubbleSort(data,size);

    printf("Sorted Array\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }

    printf("\n");

    return 0;
}