// maximum element

#include<iostream>
#include<vector>
using namespace std;

int MaxEle(vector<int> arr){
    int max = arr.at(0);
    int i;
    for(i=1;i<arr.size();i++){
        if(arr.at(i)>max){
            max = arr.at(i);
        }
    }
    return max;
}

int main(){
    vector<int> vec = {3,5,3,5,3,5,86,56,56,4,45,4};
    cout << MaxEle(vec) << endl;
    
}
