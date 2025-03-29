// Find Maximum Product of Two Elements

#include <iostream>
#include<vector>
using namespace std;

int maximumProduct(vector<int> arr){
    int pro = 1;
    int i,j;
    for(i=0;i<arr.size();i++){
        for(j=i+1 ; j<arr.size();j++){
            if(arr.at(i)*arr.at(j) > pro){
                pro = arr.at(i)*arr.at(j) ;
            }
        }
    }
    
    return pro;
}

int main()
{
    
    vector<int> arr = {10,1,2,3,4,5,6,7,8,9,100};
    cout << maximumProduct(arr) ;
    return 0;
}