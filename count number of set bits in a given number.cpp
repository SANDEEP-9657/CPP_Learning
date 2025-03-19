// count number of set bits in a given number

#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << countSetBits(n) << endl;
    
}