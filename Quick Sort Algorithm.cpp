// Quick Sort Algorithm
#include<iostream>
#include<vector>

using namespace std;

void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int Parition(vector<int>& arr , int low , int high){
    int pivot = arr[high];
    int i = low-1;
    
    for(int j = low ; j < high ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    
    swap(&arr[i+1],&arr[high]);
    
    return i+1;
}




void QuickSort(vector<int>& arr , int low , int high){
    if(low < high){
        int pi = Parition(arr,low,high);
        QuickSort(arr , low , pi-1);
        QuickSort(arr , pi+1 , high);
    }
}

int main(){
    
    vector<int> arr = {9,8,6,4,3,2,1,0};
    QuickSort(arr , 0 , arr.size()-1);
    for(auto i : arr){
        cout << i << "  " ;
    }
    
    
    
}