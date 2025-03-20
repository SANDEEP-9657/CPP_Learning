// to check whether a number is a power of int64_t
#include<bits/stdc++.h>
using namespace std;


bool isPowerOf4(int n){
    return n >0 && ( n & (n-1) )== 0 && (n%3)==1;
}

int main(){
    int n ;
    cout << "Enter the number" << endl;
    cin >> n;
    if(isPowerOf4(n)){
        cout << "it is a power of 4" << endl;
    }
    else{
        cout << "it is not a power of 4" << endl;
    }
}