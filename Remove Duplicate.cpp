// Remove Duplicate

#include<iostream>
#include<vector>
using namespace std;

int RemoveDuplicates(vector<int>& arr ){
    int i=0 , j;
    for(j=1;j<arr.size();j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main(){
    
    vector<int> arr = {1,2,3,3,4,5,6,};
    int n = RemoveDuplicates(arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << "  ";
    }
    
}