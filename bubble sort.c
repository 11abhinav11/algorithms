#include<stdio.h>

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void print(int arr[],int n){
    int i=0;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void bubble_sort(int arr[],int n){
    int i=0,j=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

void main(){
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    print(arr,n);
}