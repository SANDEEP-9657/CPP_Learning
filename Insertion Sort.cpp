// Insertion Sort

#include <iostream>
#include<vector>

using namespace std;

void InsertionSort(vector<int> &arr){
    int i;
    for(i=1;i<arr.size();i++){
        int key = arr[i];
        int j = i -1;
        
        while(j>=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        
        arr[j+1]=key;
    }
}


int main()
{
    vector<int> arr = {1,2,4,5,6,8,9,4,5,73532,456,6,54};
    InsertionSort(arr);
    for(auto i : arr){
        cout << i << "  ";
    }

    return 0;
}