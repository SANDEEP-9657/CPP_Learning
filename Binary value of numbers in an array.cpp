// Binary value of numbers in an array

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;



int DecToBin(int n){
    int bin = 0;
    int len = 0;
    while(n!=0){
        int rem = n % 2 ;
        bin = bin + rem * pow(10,len);
        n = n / 2;;
        len++;
    }
    
    return bin;
}


int countSetBits(int n){
    int count = 0;
    while(n>0){
        if(n&1 > 0){
            count++;
        }
        n=n>>1;
    }
    
    return count;
}


vector<long int> ArrToBin(vector<long int> arr){
    int i;
    for(i=0;i<arr.size();i++){
        arr[i]=DecToBin(arr[i]);
    }
    
    return arr;
}


vector< int> SetBits(vector< int> arr){
    int i;
    for(i=0;i<arr.size();i++){
        arr[i]= countSetBits(arr[i]);
    }
    return arr;
}


int main(){
    int n;
    cout << "Enter the number of elements" ;
    cin >> n;
    vector< int> vec;
    while(n--){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    
    // vector<long int> res = ArrToBin(vec);
    // for(auto i : res){
    //     cout << i << "  ";
    // }
    
    vector< int> result = SetBits(vec);
    for(auto i : result){
        cout << i << "  ";
    }
    
}