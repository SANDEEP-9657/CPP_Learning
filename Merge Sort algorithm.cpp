// Merge Sort algorithm

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr , int l , int m , int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int i;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(i=0;i<n1;i++){
        arr1[i]=arr[l+i];
    }
    for(i=0;i<n2;i++){
        arr2[i]=arr[m+1+i];
    }
    int p = 0 , q = 0 , s = l;
    
    while(p<n1 && q < n2){
        if(arr1.at(p) <= arr2.at(q)){
            arr.at(s)=arr1.at(p);
            p++;
        }
        else{
            arr.at(s)=arr2.at(q);
            q++;
        }
        s++;
    }
    while(p<n1){
        arr.at(s)=arr1.at(p);
        s++;
        p++;
    }
    
    while(q<n2){
        arr.at(s)=arr2.at(q);
        q++;
        s++;
    }
}


void mergeSort(vector<int>& arr , int l ,int r){
    if(l<r){
        int m  = (l +r-1)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr , l, m ,r );
    }
    
}


int main(){
    
    vector<int> arr = {2,5,6,3,9,7,5,3};
    mergeSort(arr,0,arr.size()-1);
    
    for(auto i : arr){
        cout << i << "  ";
    }
    
    
    return 0;
}