// 
#include<iostream>
#include<vector>
using namespace std;

vector<int> Quotient(vector<int> arr){
    int i;
    int divv = arr.size();
    for(i=0;i<arr.size();i++){
        arr[i]=arr[i]/divv;
    }
    return arr;
}

vector<int> Remainder(vector<int> arr){
    int i;
    int divv = arr.size();
    for(i=0;i<arr.size();i++){
        arr[i]=arr[i]%divv;
    }
    return arr;
}


int main(){
    int n ;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    
    vector<int> vec;
    while(n--){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    
    vector<int> quo = Quotient(vec);
    vector<int> rem = Remainder(vec);
    
    for(auto i : quo){
        cout << i << "  ";
    }
    cout << endl;
    for(auto i : rem){
        cout << i << "  ";
    }
}