#include <stdio.h>

void merge(int uway[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;

    int L[n1],M[n2];

    for(int i=0;i<n1;i++){
        L[i]=uway[p+i];
    }

    for(int j=0;j<n2;j++){
        M[j]=uway[q+1+j];
    }

    int i=0,j=0,k=p;

    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            uway[k]=L[i];
            i++;
        }
        else{
            uway[k]=M[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        uway[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        uway[k]=M[j];
        j++;
        k++;
    }
}

void mergeSort(int uway[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;

        mergeSort(uway,l,m);
        mergeSort(uway,m+1,r);
        merge(uway,l,m,r);
    }
}

void printArray(int uway[],int size){
    for(int i=0;i<size;i++)
        printf("%d ",uway[i]);
    printf("\n");
}

int main(){
    int uway[]={38,27,43,3,82,10};
    int size=sizeof(uway)/sizeof(uway[0]);

    printf("Original array:");
    printArray(uway,size);

    mergeSort(uway,0,size-1);

    printf("Array after Merge Sort:");
    printArray(uway,size);

    return 0;
}