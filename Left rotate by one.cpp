// Left rotate by one
#include<iostream>
#include<vector>

using namespace std;

void LeftRotateByOne(vector<int> &arr){
    int i , temp ;
    temp = arr.at(0);
    for(i=0;i<arr.size()-1;i++){
        arr.at(i)=arr.at(i+1);
    }
    arr.at(arr.size()-1)=temp;
}

int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    LeftRotateByOne(arr);
    for(auto i : arr){
        cout << i << "  ";
    }
    
}