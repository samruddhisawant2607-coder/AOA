#include<stdio.h>
void InsertionSort(int array[],int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key=array[i];
        j=i;
        while(j>0 && array[j-1]>key){
            array[j]=array[j-1];
            j=j-1;
        }
        array[j]=key;
    }
}
int main(){
    int n;
    n=5;
    int arr[5]={43,76,21,13,34};
    printf("Array Before Sorting");
    for( int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    InsertionSort(arr,n);
    printf("Array After Sorting");
    for( int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");

    }
}