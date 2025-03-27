// Find Pairs with Product

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> findpairs(vector<int> arr , int p){
    int i ,j;
    vector<vector<int>> res;
    for(i=0;i<arr.size();i++){
        for(j=0 ; j<arr.size();j++){
            if(arr.at(i)*arr.at(j)==p){
                res.push_back({arr.at(i),arr.at(j)});
            }
        }
    }
    return res;
}


int main(){
    vector<int> arr ={1,2,3,4,5,6,7,8,9,10};
    vector<vector<int>> res = findpairs(arr,16);
    for(auto i : res){
        for(auto j : i ){
            cout << j << " ";
        }
        cout << endl;
    }
    
}