// BUBBLE SORT BY SORTING ELEMENTS FROM LAST
#include<stdio.h>

void swap(int *p , int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubbleSort(int arr[] , int n){
    
    int i , j ;
    
    for(i = n-1 ; i>0 ; i--){
        for(j=n-1 ; j>n-i-1 ; j--){
            if(arr[j-1]>arr[j]){
                swap(&arr[j-1],&arr[j]);
            }
        }
    }
    
    
    
}

void printArray(int arr[] , int n){
    int i ;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}



#include<stdio.h>

int main(){
    
    int n , i, arr[100]  ;
    
    printf("Enter the number of Elements:");
    scanf("%d",&n);
    
    printf("Enter the Elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("BubbleSort From Last:");
    bubbleSort(arr,n);
    printArray(arr,n);
    
    
    
}