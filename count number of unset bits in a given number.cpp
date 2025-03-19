// count number of set bits in a given number

#include<bits/stdc++.h>
using namespace std;

int countUnSetBits(int n){
    int count = 0;
    int bits = 0;
    while(n>0){
        if(n&1 > 0){
            count++;
        }
        n=n>>1;
        bits++;
        
    }
    
    return (bits-count);
}

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << countUnSetBits(n) << endl;
    
}