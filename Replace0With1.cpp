// Replace all zeros with 1 in a given integer

#include<bits/stdc++.h>
using namespace std;

int ReplaceOwith1(int n){
    int res = 0;
    while(n>0){
        int rem = n %10;
        if(rem == 0){
            res = res * 10 + 1;
        }
        else{
            res = res * 10 + rem;
        }
        n/=10;
    }
    while(res > 0){
        n = n * 10 + res % 10;
        res/=10;
    }
    
    return n;
}

int main(){
    int n ;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << ReplaceOwith1(n) << endl;
}