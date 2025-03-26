// Bubble sort

#include<iostream>
#include<vector>
using namespace std;


vector<int> BubbleSort(vector<int> a){
    int n = a.size();
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    
    return a;
}




vector<int> BubbleSort(vector<int> a){
    int n = a.size();
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>0;j--){
            if(a[j]<a[j-1]){
                int temp = a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }

    
    return a;
}



int main(){
    vector<int> arr = {90,65,32,97,122,48,57};
    arr = BubbleSort(arr);
    for(auto i : arr){
        cout << i << " ";
    }
}