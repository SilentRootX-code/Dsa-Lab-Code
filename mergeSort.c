#include <stdio.h>

void merge(int uway[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;

    int L[n1],M[n2];

    for(int i=0;i<n1;i++)
        L[i]=uway[p+i];

    for(int j=0;j<n2;j++)
        M[j]=uway[q+1+j];

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

int main(){
    int uway[]={3,8,9,1,5,7};

    merge(uway,0,2,5);

    for(int i=0;i<6;i++){
        printf("%d ",uway[i]);
    }

    printf("\n");

    return 0;
}