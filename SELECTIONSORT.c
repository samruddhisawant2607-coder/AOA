#include<stdio.h>
void SelectionSort(int arr[],int n){
    int i,j,small,b;
    for(i=0;i<n-1;i++){
        small=arr[i];
        b=i;
        for(j=i+1;j<n;j++){
            if(small>arr[j]){
                small=arr[j];
                b=j;

            }

        }
        arr[b]=arr[i];
        arr[i]=small;
    }
}
int main(){
    int i,n=5;
    int arr[5]={23,14,54,28,38};
    printf("Array before sorting");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    SelectionSort(arr,n);
    printf("Array after sorting");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0 ;
}