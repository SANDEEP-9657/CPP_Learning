// Right rotate by one
#include<iostream>
#include<vector>

using namespace std;

void RightRotateByOne(vector<int> &arr){
    int i , temp ;
    temp = arr.at(arr.size()-1);
    for(i=arr.size()-1;i>0;i--){
        arr.at(i)=arr.at(i-1);
    }
    arr.at(0)=temp;
}

int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    RightRotateByOne(arr);
    for(auto i : arr){
        cout << i << "  ";
    }
    
}