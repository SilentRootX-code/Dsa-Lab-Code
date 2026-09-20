#include <stdio.h>

void SelectionSort(int uway[], int size){
    for(int step=0; step<size-1; step++){
        int min_idx=step;
        int swapped=0;
        int is_sorted=1;

        for(int i=step+1;i<size;i++){
            if(uway[i]<uway[i-1]){
                is_sorted=0;
            }

            if(uway[i]<uway[min_idx]){
                min_idx=i;
            }
        }

        if(min_idx != step){
            int temp=uway[min_idx];
            uway[min_idx]=uway[step];
            uway[step]=temp;
            swapped=1;
        }

        printf("Iteration %d:",step+1);
        for(int i=0;i<size;i++){
            printf("%d ",uway[i]);
        }
        printf("\n");

        if(swapped==0 && is_sorted){
            break;
        }
    }
}

int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);

    int data[size];

    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
    }

    SelectionSort(data,size);

    printf("Sorted Array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }

    printf("\n");

    return 0;
}