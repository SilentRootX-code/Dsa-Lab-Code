#include <stdio.h>

void bubbleSort(int uway[],int size){
    for(int step=0;step<size-1;step++){
        for(int i=0;i<size-step-1;i++){
            if(uway[i]>uway[i+1]){
                int temp=uway[i];
                uway[i]=uway[i+1];
                uway[i+1]=temp;
            }
        }
    }
}

void SelectionSort(int uway[],int size){
    for(int step=0;step<size-1;step++){
        int min_idx=step;

        for(int i=step+1;i<size;i++){
            if(uway[i]<uway[min_idx]){
                min_idx=i;
            }
        }

        int temp=uway[min_idx];
        uway[min_idx]=uway[step];
        uway[step]=temp;
    }
}

void InsertionSort(int uway[],int size){
    for(int step=1;step<size;step++){
        int key=uway[step];
        int j=step-1;

        while(j>=0 && key<uway[j]){
            uway[j+1]=uway[j];
            --j;
        }

        uway[j+1]=key;
    }
}

int main(){
    int size,choice;

    printf("Enter size of array:");
    scanf("%d",&size);

    int data[size];

    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
    }

    printf("Choose sorting technique:\n");
    printf("1. Bubble sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");

    printf("Enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            bubbleSort(data,size);
            break;

        case 2:
            SelectionSort(data,size);
            break;

        case 3:
            InsertionSort(data,size);
            break;

        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Sorted Array\n");

    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }

    printf("\n");

    return 0;
}